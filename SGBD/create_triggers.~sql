alter session set "_ORACLE_SCRIPT"=true;
alter session set current_schema = agenda_telefonica;

DROP SEQUENCE zona_administrativa_sequence;
CREATE SEQUENCE zona_administrativa_sequence;

CREATE OR REPLACE TRIGGER zona_administrativa_on_insert
       BEFORE INSERT ON zona_administrativa
       FOR EACH ROW
BEGIN
       SELECT zona_administrativa_sequence.nextval
       INTO :new.id_zona_administrativa
       FROM dual;
END;


DROP SEQUENCE adresa_sequence;
CREATE SEQUENCE adresa_sequence;

CREATE OR REPLACE TRIGGER adresa_on_insert
       BEFORE INSERT ON adresa
       FOR EACH ROW
BEGIN
       SELECT adresa_sequence.nextval
       INTO :new.id_adresa
       FROM dual;
END;

DROP SEQUENCE persoana_sequence;
CREATE SEQUENCE persoana_sequence;

CREATE OR REPLACE TRIGGER persoana_on_insert
       BEFORE INSERT ON persoana
       FOR EACH ROW
BEGIN
       SELECT persoana_sequence.nextval
       INTO :new.id_persoana
       FROM dual;
END;

DROP SEQUENCE date_contact_sequence;
CREATE SEQUENCE date_contact_sequence;

CREATE OR REPLACE TRIGGER date_contact_on_insert
       BEFORE INSERT ON date_contact
       FOR EACH ROW
BEGIN
       SELECT date_contact_sequence.nextval
       INTO :new.id_date_contact
       FROM dual;
END;

DROP SEQUENCE contact_sequence;
CREATE SEQUENCE contact_sequence;

CREATE OR REPLACE TRIGGER contact_on_insert
       BEFORE INSERT ON contact
       FOR EACH ROW
BEGIN
       SELECT contact_sequence.nextval
       INTO :new.id_contact
       FROM dual;
END;
