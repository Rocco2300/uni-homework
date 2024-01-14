alter session set "_ORACLE_SCRIPT"=true;
alter session set current_schema = agenda_telefonica;

-- toate persoanele nascute in 23.02
select * from persoana p 
where (EXTRACT(YEAR FROM p.data_nastere) between 2000 and 2023)
and EXTRACT(MONTH FROM p.data_nastere) = 2 
and EXTRACT(DAY FROM p.data_nastere) = 23;

-- persoanele care locuiesc in bucuresti
select p.* from persoana p 
where exists (select za.judet from adresa a
join zona_postala zp on zp.cod_postal = a.cod_postal
join zona_administrativa za on za.id_zona_administrativa = zp.id_zona_administrativa
where a.id_adresa = p.id_adresa and za.judet = 'Bucuresti'); 

-- toate datele de contact ale lui Vasilescu Manole
select dc.* from persoana p
join contact c on c.id_persoana = p.id_persoana
join date_contact dc on dc.id_date_contact = c.id_date_contact
where p.nume||' '||p.prenume = 'Vasilescu Manole';

-- toate persoanele care nu au contact mobil
select p.nume, p.prenume from persoana p
where not exists(
select * from date_contact dc
join contact c on c.id_date_contact = dc.id_date_contact
where c.id_persoana = p.id_persoana and tip_contact = 'mobil');

-- toate persoanele care stau cu cel putin inca alta persoana la adresa
select p.nume, p.prenume from persoana p
where (select COUNT(id_persoana) from persoana 
where p.id_adresa = id_adresa) >= 2; 

-- adresele unde locuiesc 2 sau 3 persoane
select * from adresa a
where (select COUNT(id_persoana) from persoana 
where a.id_adresa = id_adresa) between 2 and 3;

-- persoanele care au mai mult de 2 contacte mobile
select p.* from persoana p
where (select COUNT(dc.tip_contact) from contact c 
join date_contact dc on dc.id_date_contact = c.id_date_contact
where c.id_persoana = p.id_persoana and dc.tip_contact = 'mobil') >= 2;   
