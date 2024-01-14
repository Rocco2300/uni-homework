alter session set "_ORACLE_SCRIPT"=true;
alter session set current_schema = agenda_telefonica;

DROP TABLE contact;
DROP TABLE date_contact;
DROP TABLE persoana;
DROP TABLE adresa;
DROP TABLE zona_postala;
DROP TABLE zona_administrativa;

CREATE TABLE zona_administrativa (
       id_zona_administrativa int NOT NULL, 
       localitate varchar(64) NOT NULL,
       judet varchar(64) NOT NULL
);

ALTER TABLE zona_administrativa
      ADD (
          CONSTRAINT zona_administrativa_uk UNIQUE (id_zona_administrativa),
          CONSTRAINT zona_administrativa_pk PRIMARY KEY (id_zona_administrativa, localitate)
      );


CREATE TABLE zona_postala (
       cod_postal varchar(6) NOT NULL,
       id_zona_administrativa int NOT NULL
);

ALTER TABLE zona_postala 
      ADD (
          CONSTRAINT zona_postala_pk PRIMARY KEY (cod_postal),
          CONSTRAINT zona_postala_fk FOREIGN KEY (id_zona_administrativa) REFERENCES zona_administrativa(id_zona_administrativa)
      );

CREATE TABLE adresa (
       id_adresa int NOT NULL,
       cod_postal varchar(6) NOT NULL,
       strada varchar(64) NOT NULL,
       numar varchar(4) NOT NULL,
       bloc varchar(10) DEFAULT '',
       scara varchar(4) DEFAULT '',
       etaj varchar(2) DEFAULT '',
       apartament varchar(4) DEFAULT ''
);

ALTER TABLE adresa 
      ADD (
        CONSTRAINT adresa_pk PRIMARY KEY (id_adresa),
        CONSTRAINT adresa_fk FOREIGN KEY (cod_postal) REFERENCES zona_postala(cod_postal),
        CONSTRAINT adresa_uk UNIQUE (
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
       id_persoana int NOT NULL,
       id_adresa int,
       nume varchar(255) NOT NULL,
       prenume varchar(255) NOT NULL,
       data_nastere date NOT NULL
);

ALTER TABLE persoana
      ADD (
          CONSTRAINT persoana_pk PRIMARY KEY (id_persoana),
          CONSTRAINT persoana_fk FOREIGN KEY (id_adresa) REFERENCES adresa(id_adresa)
      );

CREATE TABLE date_contact (
       id_date_contact int NOT NULL,
       tip_contact varchar(5) CHECK( tip_contact IN ('email', 'fix', 'mobil') ) NOT NULL,
       valoare varchar(255) NOT NULL
);

ALTER TABLE date_contact 
      ADD (
          CONSTRAINT date_contact_pk PRIMARY KEY (id_date_contact, valoare),
          CONSTRAINT date_contact_id_uk UNIQUE (id_date_contact),
          CONSTRAINT date_contact_valoare_uk UNIQUE (valoare)
      ); 
      
CREATE TABLE contact (
       id_contact int NOT NULL,
       id_persoana int NOT NULL,
       id_date_contact int NOT NULL
);

ALTER TABLE contact 
      ADD (
          CONSTRAINT contact_pk PRIMARY KEY (id_contact),
          CONSTRAINT contact_persoana_fk FOREIGN KEY (id_persoana) REFERENCES persoana(id_persoana),
          CONSTRAINT contact_date_contact_fk FOREIGN KEY (id_date_contact) REFERENCES date_contact(id_date_contact)
      );

