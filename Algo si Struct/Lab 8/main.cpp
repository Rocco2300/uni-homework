#include <iostream>
#include <string>
#include <vector>

// Nod
using User = std::string;

// Muchie
struct Friendship
{
    User user1, user2;

    Friendship(User user1, User user2)
    {
        this->user1 = user1;
        this->user2 = user2;
    }

    bool operator==(Friendship other)
    {
        return (
            (user1 == other.user1 && user2 == other.user2) || 
            (user1 == other.user2 && user2 == other.user1)
        );
    }

    bool has(User other)
    {
        return user1 == other || user2 == other;
    }

    friend std::ostream& operator<<(std::ostream& out, Friendship f);
};

std::ostream& operator<<(std::ostream& out, Friendship f)
{
    out << '{' << f.user1 << ", " << f.user2 << '}';
    return out;
}

// Noduri
std::vector<User> users;
// Muchii
std::vector<Friendship> friendships;

int find(User name)
{
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i] == name)
        {
            return i;
        }
    }
    return -1;
}


int find(Friendship friendship)
{
    for (int i = 0; i < friendships.size(); i++)
    {
        if (friendships[i] == friendship)
            return i;
    }
    return -1;
}

bool add_user(User name)
{
    if (find(name) != -1)
        return false;

    users.push_back(name);

    return true;
}

bool add_friendship(Friendship friendship)
{
    if (find(friendship.user1) == -1 || find(friendship.user2) == -1)
        return false;

    if (find(friendship) != -1)
        return false;

    friendships.push_back(friendship);

    return true;
}

void remove_friendships(User user)
{
    for (int i = friendships.size() - 1; i >= 0; i--)
    {
        if (friendships[i].has(user))
        {
            friendships.erase(friendships.begin() + i);
        }
    }
}

void remove_user(User user)
{
    int index = find(user);

    if (index == -1)
        return;

    remove_friendships(user);

    users.erase(users.begin() + index);
}

void print_users()
{
    for (int i = 0; i < users.size(); i++)
    {
        std::cout << users[i] << " ";
    }

    std::cout << '\n';
}

void print_friendships()
{
    for (int i = 0; i < friendships.size(); i++)
    {
        std::cout << friendships[i] << ' ';
    }

    std::cout << '\n';
}

void print_friends(User user)
{
    bool hasFriends = false;

    for (int i = 0; i < friendships.size(); i++)
    {
        if (friendships[i].has(user))
        {
            std::cout << ((friendships[i].user1 != user) ? friendships[i].user1 : friendships[i].user2) << ' ';
            hasFriends = true;
        }
    }

    std::cout << ((hasFriends) ? "\n" : "User has no friends\n");
}

void print_submenu(int choice);

void print_menu()
{
    system("cls");

    std::cout << "1. Numar de utilizatori\n";
    std::cout << "2. Inserare utilizator\n";
    std::cout << "3. Eliminare utilizator\n";
    std::cout << "4. Afisare prieteni\n";
    std::cout << "5. Afisare prietenii\n";

    int choice;
    std::cout << "Choice: ";
    std::cin  >> choice;

    print_submenu(choice);
}

void print_submenu(int choice)
{
    User name;
    char hasFriends;
    User v_friend;
    switch (choice)
    {
    case 1:
        system("cls");
        std::cout << "Numar utilizatori: " << users.size() << "\n";
        system("pause");
        break;
    case 2:
        system("cls");
        std::cout << "Username: ";
        std::cin  >> name;

        add_user(name);

        std::cout << "Add friends? (y/n): ";
        std::cin  >> hasFriends;

        if (hasFriends == 'y')
        {
            do
            {
                std::cout << "Enter a friend: (\"none\" to exit) ";
                std::cin >> v_friend;

                if (v_friend != "none")
                {
                    if (!add_friendship(Friendship(name, v_friend)))
                        std::cout << "User doesn't exist or already friends.\n";
                }
            } while (v_friend != "none");
            
        }
        else
        {
            print_menu();
        }
        break;
    case 3:
        system("cls");
        std::cout << "Username: ";
        std::cin  >> name;
        remove_user(name);
        break;
    case 4:
        system("cls");
        std::cout << "Username: ";
        std::cin  >> name;
        print_friends(name);
        system("pause");
        break;
    case 5:
        system("cls");
        print_friendships();
        system("pause");
        break;
    
    default:
        exit(0);
        break;
    }

    print_menu();
}

int main()
{
    print_menu();

    return 0;
}