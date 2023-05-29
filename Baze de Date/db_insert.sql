use agenda_telefonica;

-- Date de contact
-- email
-- 1
INSERT INTO date_contact (tip_contact, valoare) VALUES ('email', 'andreigrigore@utm.ro'); -- 1
INSERT INTO date_contact (tip_contact, valoare) VALUES ('email', 'andreygrigore@yahho.com'); -- 1
INSERT INTO date_contact (tip_contact, valoare) VALUES ('email', 'vmanole@hotmail.com'); -- 2
INSERT INTO date_contact (tip_contact, valoare) VALUES ('email', 'alexutza@hotmail.com'); -- 3
INSERT INTO date_contact (tip_contact, valoare) VALUES ('email', 'acadele_sarate@zmail.com'); -- 3
INSERT INTO date_contact (tip_contact, valoare) VALUES ('email', 'cartoful_intergalactic@gmail.com'); -- 5
INSERT INTO date_contact (tip_contact, valoare) VALUES ('email', 'cristalemov@yahoo.com'); -- 4
INSERT INTO date_contact (tip_contact, valoare) VALUES ('email', 'leana.urda@gmail.com'); -- 6
INSERT INTO date_contact (tip_contact, valoare) VALUES ('email', 'urda.leana@univ.com'); -- 6
INSERT INTO date_contact (tip_contact, valoare) VALUES ('email', 'david.urda@roblox.com'); -- 7
INSERT INTO date_contact (tip_contact, valoare) VALUES ('email', 'amy.santiago@yahoo.com'); -- 8
INSERT INTO date_contact (tip_contact, valoare) VALUES ('email', 'santiago.amy@yahoo.com'); -- 8 
INSERT INTO date_contact (tip_contact, valoare) VALUES ('email', 'amy.peralta@yahoo.com'); -- 8
INSERT INTO date_contact (tip_contact, valoare) VALUES ('email', 'jakiez@hotmail.com'); -- 9

-- mobil
-- 15
INSERT INTO date_contact (tip_contact, valoare) VALUES ('mobil', '+40728789320'); -- 1
INSERT INTO date_contact (tip_contact, valoare) VALUES ('mobil', '+40720782511'); -- 1
INSERT INTO date_contact (tip_contact, valoare) VALUES ('mobil', '+40722567129'); -- 1
INSERT INTO date_contact (tip_contact, valoare) VALUES ('mobil', '+40738926405'); -- 2
INSERT INTO date_contact (tip_contact, valoare) VALUES ('mobil', '+40789435302'); -- 2
INSERT INTO date_contact (tip_contact, valoare) VALUES ('mobil', '+40798237450'); -- 3
INSERT INTO date_contact (tip_contact, valoare) VALUES ('mobil', '+40723984570'); -- 4
INSERT INTO date_contact (tip_contact, valoare) VALUES ('mobil', '+40729783453'); -- 5
INSERT INTO date_contact (tip_contact, valoare) VALUES ('mobil', '+40723904832'); -- 6
INSERT INTO date_contact (tip_contact, valoare) VALUES ('mobil', '+40723910482'); -- 8
INSERT INTO date_contact (tip_contact, valoare) VALUES ('mobil', '+40723904823'); -- 9
INSERT INTO date_contact (tip_contact, valoare) VALUES ('mobil', '+40723234978'); -- 11

-- fix
-- 27
INSERT INTO date_contact (tip_contact, valoare) VALUES ('fix', '+40312580312'); -- 2
INSERT INTO date_contact (tip_contact, valoare) VALUES ('fix', '+40390782345'); -- 4, 5
INSERT INTO date_contact (tip_contact, valoare) VALUES ('fix', '+40390237454'); -- 6, 7
INSERT INTO date_contact (tip_contact, valoare) VALUES ('fix', '+40223478905'); -- 8, 9

-- Zona administrativa 
INSERT INTO zona_administrativa(judet, localitate) VALUES ('Bucuresti', 'Sector 3');
INSERT INTO zona_administrativa(judet, localitate) VALUES ('Constanta', 'Constanta');
INSERT INTO zona_administrativa(judet, localitate) VALUES ('Teleorman', 'Teleorman');
INSERT INTO zona_administrativa(judet, localitate) VALUES ('Valcea', 'Dragasani');
INSERT INTO zona_administrativa(judet, localitate) VALUES ('Bucuresti', 'Sector 4');
INSERT INTO zona_administrativa(judet, localitate) VALUES ('Bucuresti', 'Sector 2');

-- Zona postala
INSERT INTO zona_postala(id_zona_administrativa, cod_postal) VALUES (1, '021783');
INSERT INTO zona_postala(id_zona_administrativa, cod_postal) VALUES (1, '021784');
INSERT INTO zona_postala(id_zona_administrativa, cod_postal) VALUES (2, '900540');
INSERT INTO zona_postala(id_zona_administrativa, cod_postal) VALUES (3, '147215');
INSERT INTO zona_postala(id_zona_administrativa, cod_postal) VALUES (4, '203837');
INSERT INTO zona_postala(id_zona_administrativa, cod_postal) VALUES (5, '303827');
INSERT INTO zona_postala(id_zona_administrativa, cod_postal) VALUES (6, '201555');

-- Adrese
INSERT INTO adresa (cod_postal, strada, numar) VALUES ('021783', 'Florilor', '23'); -- 1
INSERT INTO adresa (cod_postal, strada, numar) VALUES ('900540', 'Murgescu I., Viceamiral', '45'); -- 3
INSERT INTO adresa (cod_postal, strada, numar) VALUES ('147215', 'Nanov', '20'); -- 4, 5
INSERT INTO adresa (cod_postal, strada, numar) VALUES ('203837', 'Garii', '2'); -- 6, 7
INSERT INTO adresa (cod_postal, strada, numar, bloc) VALUES ('303827', 'Oltenitei', '105', 'INTEC'); -- 8, 9, 10
INSERT INTO adresa (cod_postal, strada, numar) VALUES ('201555', 'Leonida', '5'); -- 2

-- Persoane
INSERT INTO persoana (nume, prenume, data_nastere, id_adresa) VALUES ('Grigore', 'Andrei', DATE('2000-02-23'), 1); -- 
INSERT INTO persoana (nume, prenume, data_nastere, id_adresa) VALUES ('Vasilescu', 'Manole', DATE('1972-01-18'), 6); -- 
INSERT INTO persoana (nume, prenume, data_nastere, id_adresa) VALUES ('Pascu', 'Alexandra', DATE('2000-08-21'), 2); --
INSERT INTO persoana (nume, prenume, data_nastere, id_adresa) VALUES ('Gavrilescu', 'Ioana', DATE('1992-02-19'), 3); -- 
INSERT INTO persoana (nume, prenume, data_nastere, id_adresa) VALUES ('Popescu', 'Adriana', DATE('1994-02-23'), 3); -- 
INSERT INTO persoana (nume, prenume, data_nastere, id_adresa) VALUES ('Urda', 'Leana', DATE('1984-05-13'), 4); --
INSERT INTO persoana (nume, prenume, data_nastere, id_adresa) VALUES ('Urda', 'David', DATE('2015-02-23'), 4); --
INSERT INTO persoana (nume, prenume, data_nastere, id_adresa) VALUES ('Peralta', 'Amy', DATE('1983-06-30'), 5); --
INSERT INTO persoana (nume, prenume, data_nastere, id_adresa) VALUES ('Peralta', 'Jake', DATE('1985-09-10'), 5); -- 
INSERT INTO persoana (nume, prenume, data_nastere, id_adresa) VALUES ('Peralta', 'Blake', DATE('2020-02-23'), 5); --
INSERT INTO persoana (nume, prenume, data_nastere) VALUES ('Matei', 'Alex', DATE('1999-01-01')); --

-- Contact (legatura date contact - persoana)
INSERT INTO contact (id_persoana, id_date_contact) VALUES (1, 1);
INSERT INTO contact (id_persoana, id_date_contact) VALUES (1, 2);
INSERT INTO contact (id_persoana, id_date_contact) VALUES (1, 15);
INSERT INTO contact (id_persoana, id_date_contact) VALUES (1, 16);
INSERT INTO contact (id_persoana, id_date_contact) VALUES (1, 17);

INSERT INTO contact (id_persoana, id_date_contact) VALUES(2, 3);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(2, 18);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(2, 19);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(2, 27);

INSERT INTO contact (id_persoana, id_date_contact) VALUES(3, 4);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(3, 5);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(3, 20);

INSERT INTO contact (id_persoana, id_date_contact) VALUES(4, 7);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(4, 21);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(4, 28);

INSERT INTO contact (id_persoana, id_date_contact) VALUES(5, 6);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(5, 22);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(5, 28);

INSERT INTO contact (id_persoana, id_date_contact) VALUES(6, 8);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(6, 9);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(6, 23);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(6, 29);

INSERT INTO contact (id_persoana, id_date_contact) VALUES(7, 10);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(7, 29);

INSERT INTO contact (id_persoana, id_date_contact) VALUES(8, 11);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(8, 12);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(8, 13);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(8, 24);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(8, 30);

INSERT INTO contact (id_persoana, id_date_contact) VALUES(9, 14);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(9, 25);
INSERT INTO contact (id_persoana, id_date_contact) VALUES(9, 30);

INSERT INTO contact (id_persoana, id_date_contact) VALUES(11, 26);
