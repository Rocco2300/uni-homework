CREATE DATABASE agenda_telefonica;

USE agenda_telefonica;

CREATE TABLE zona_administrativa (
	id_zona_administrativa int NOT NULL AUTO_INCREMENT, 
	localitate varchar(64) NOT NULL,
    judet varchar(64) NOT NULL,
    PRIMARY KEY(id_zona_administrativa, localitate)
);

CREATE TABLE zona_postala (
    cod_postal varchar(6) NOT NULL,
    id_zona_administrativa int NOT NULL,
    PRIMARY KEY (cod_postal),
    FOREIGN KEY (id_zona_administrativa) REFERENCES zona_administrativa(id_zona_administrativa)
);

CREATE TABLE adresa (
	id_adresa int NOT NULL AUTO_INCREMENT,
    cod_postal varchar(6) NOT NULL,
    strada varchar(64) NOT NULL,
    numar varchar(4) NOT NULL,
    bloc varchar(10) DEFAULT '',
    scara varchar(4) DEFAULT '',
    etaj varchar(2) DEFAULT '',
    apartament varchar(4) DEFAULT '', 
    PRIMARY KEY (id_adresa),
    FOREIGN KEY (cod_postal) REFERENCES zona_postala(cod_postal),
	UNIQUE KEY (
		cod_postal,
        strada, 
        numar, 
        bloc, 
        scara, 
        etaj, 
        apartament
	)
);

CREATE TABLE persoana (
	id_persoana int NOT NULL AUTO_INCREMENT, 
    id_adresa int,
    nume varchar(255) NOT NULL,
    prenume varchar(255) NOT NULL,
    data_nastere date NOT NULL,
    PRIMARY KEY (id_persoana),
    FOREIGN KEY (id_adresa) REFERENCES adresa(id_adresa)
);

CREATE TABLE date_contact (
	id_date_contact int NOT NULL AUTO_INCREMENT,
    tip_contact enum('email', 'fix', 'mobil') NOT NULL,
    valoare varchar(255) NOT NULL UNIQUE,
    PRIMARY KEY (id_date_contact, valoare)
);

CREATE TABLE contact (
	id_contact int NOT NULL AUTO_INCREMENT,
    id_persoana int NOT NULL,
	id_date_contact int NOT NULL,
	PRIMARY KEY (id_contact),
    FOREIGN KEY (id_date_contact) REFERENCES date_contact(id_date_contact),
    FOREIGN KEY (id_persoana) REFERENCES persoana(id_persoana)
);


