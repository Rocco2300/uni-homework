use agenda_telefonica;

-- 3.a
select * from persoana as p 
where YEAR(p.data_nastere) between 2000 and 2023
and MONTH(p.data_nastere) = 2 
and DAY(p.data_nastere) = 23;

-- 3.b
select p.* from persoana as p 
where exists (select za.judet from adresa as a
join zona_postala as zp on zp.cod_postal = a.cod_postal
join zona_administrativa as za on za.id_zona_administrativa = zp.id_zona_administrativa
where a.id_adresa = p.id_adresa and za.judet = 'Bucuresti'); 

-- 3.c
select dc.* from persoana as p
join contact as c on c.id_persoana = p.id_persoana
join date_contact as dc on dc.id_date_contact = c.id_date_contact
where CONCAT_WS(' ', p.nume, p.prenume) = 'Vasilescu Manole';

-- 3.d
select p.nume, p.prenume from persoana as p
where not exists(
select * from date_contact as dc
join contact as c on c.id_date_contact = dc.id_date_contact
where c.id_persoana = p.id_persoana and tip_contact = 'mobil');

-- 3.e
select p.nume, p.prenume from persoana as p
where (select COUNT(id_persoana) from persoana 
where p.id_adresa = id_adresa order by id_adresa) >= 2; 

-- 3.f
select * from adresa as a
where (select COUNT(id_persoana) from persoana 
where a.id_adresa = id_adresa order by id_adresa) between 2 and 3;

-- 3.g
select p.* from persoana as p
where (select COUNT(dc.tip_contact) from contact as c 
join date_contact as dc on dc.id_date_contact = c.id_date_contact
where c.id_persoana = p.id_persoana and dc.tip_contact = 'mobil') >= 2;   

-- 3.hS
select CONCAT_WS(' ', a.cod_postal, a.strada, a.numar, a.bloc, a.scara, 
a.etaj, a.apartament, za.localitate, za.judet) as adresa_completa, COUNT(id_persoana) 
from persoana as p
join adresa as a on p.id_adresa = a.id_adresa
join zona_postala as zp on zp.cod_postal = a.cod_postal
join zona_administrativa as za on za.id_zona_administrativa = zp.id_zona_administrativa
group by adresa_completa;
