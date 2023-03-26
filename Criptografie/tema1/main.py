import codecs
import heapq
from math import log2


class Node:
    def __init__(self, char, freq, left=None, right=None):
        self.char = char
        self.freq = freq
        self.left = left
        self.right = right
        self.code = ''

    def __lt__(self, other):
        return self.freq < other.freq


def make_frequency_map(text):
    frequency = {}
    for char in text:
        if char not in frequency:
            frequency[char] = 0
        frequency[char] += 1
    return frequency


def make_code_frequency_map(encoded_text):
    if len(encoded_text) % 8 != 0:
        print('Encoded text not padded')
        return

    frequency = {}
    for i in range(0, len(encoded_text), 8):
        byte = encoded_text[i:i+8]
        if byte not in frequency:
            frequency[byte] = 0
        frequency[byte] += 1
    return frequency


def get_source_probabilities(text, frequency):
    probabilities = {}
    for key in frequency:
        probabilities[key] = frequency[key] / len(text)
    return probabilities


def get_source_entropy(probabilities):
    ret = 0
    for key in probabilities:
        ret += probabilities[key] * log2(1 / probabilities[key])
    return ret


def get_code_probabilities(encoded_text, frequency):
    probabilities = {}
    for key in frequency:
        probabilities[key] = frequency[key] / (len(encoded_text) / 8)
    return probabilities


def get_code_entropy(probabilities):
    ret = 0
    for key in probabilities:
        ret += probabilities[key] * log2(1 / probabilities[key])
    return ret


def make_heap(heap, frequency):
    for key in frequency:
        node = Node(key, frequency[key])
        heapq.heappush(heap, node)


def make_tree(heap):
    while len(heap) > 1:
        left = heapq.heappop(heap)
        right = heapq.heappop(heap)

        left.code = 1
        right.code = 0

        node = Node('', left.freq + right.freq, left, right)
        heapq.heappush(heap, node)


def build_codes(codes, node, val=''):
    code = val + str(node.code)

    if node.left:
        build_codes(codes, node.left, code)
    if node.right:
        build_codes(codes, node.right, code)

    if not node.left and not node.right:
        codes[node.char] = code


def get_encoded_text(text, codes):
    encoded_text = ''
    for char in text:
        encoded_text += codes[char]
    return encoded_text


def get_padded_encoded_text(encoded_text):
    padding = 8 - len(encoded_text) % 8
    for i in range(padding):
        encoded_text += '0'

    padding_info = "{0:08b}".format(padding)
    encoded_text = padding_info + encoded_text
    return encoded_text


def get_byte_array(encoded_text):
    byte_array = bytearray()
    for i in range(0, len(encoded_text), 8):
        byte = encoded_text[i:i+8]
        byte_array.append(int(byte, 2))
    return byte_array


def encode():
    with codecs.open('text.txt', 'r', 'utf-8') as file, open('text.bin', 'wb') as output:
        text = file.read()
        frequency = make_frequency_map(text)
        probabilities = get_source_probabilities(text, frequency)
        source_entropy = get_source_entropy(probabilities)

        heap = []
        codes = {}

        make_heap(heap, frequency)
        make_tree(heap)
        build_codes(codes, heap[0])

        encoded_text = get_encoded_text(text, codes)
        encoded_text = get_padded_encoded_text(encoded_text)

        code_frequency = make_code_frequency_map(encoded_text)
        code_probabilities = get_code_probabilities(encoded_text, code_frequency)
        code_entropy = get_code_entropy(code_probabilities)

        byte_array = get_byte_array(encoded_text)
        output.write(bytes(byte_array))

        print('\nProbabilitati:')
        for key in probabilities:
            print(f'{repr(key)} -> {probabilities[key]:.5f}')

        print('\nCoduri:')
        for key in codes:
            print(f'{repr(key)} -> {codes[key]}')

        print(f'\nEntropie text sursa: {source_entropy:.2f}')
        print(f'Entropie cod: {code_entropy:.2f}')

        medium_length = 0
        for key in codes:
            medium_length += probabilities[key] * len(codes[key])
        print(f'Lungime medie cod: {medium_length:.2f}')

        # H(A) / (l * log(M)) = eta
        eta = source_entropy / (medium_length * log2(2))
        print(f'Eficienta cod: {eta:.2f}')
        print(f'Redundanta cod: {1-eta:.2f}')

        # H(A) / log(M), unde M = 2
        comparator = source_entropy / log2(2)

        if comparator <= medium_length < comparator + 1:
            print("Verifica prima teorema a lui Shannon")
        else:
            print("Nu verifica prima teorema a lui Shannon")


if __name__ == '__main__':
    encode()
