-- test: toate persoanele
create view persoane as
       select * from persoana;
       
-- view cu persoanele care stau in bucuresti
create view bucuresteni as
       select p.* from persoana p 
       where exists (select za.judet from adresa a
       join zona_postala zp on zp.cod_postal = a.cod_postal
       join zona_administrativa za on za.id_zona_administrativa = zp.id_zona_administrativa
       where a.id_adresa = p.id_adresa and za.judet = 'Bucuresti'); 
       
select * from bucuresteni;

-- view cu persoanele care au mai mult de 2 numere de mobil
create view afaceristi as
       select p.* from persoana p
       where (select COUNT(dc.tip_contact) from contact c 
       join date_contact dc on dc.id_date_contact = c.id_date_contact
       where c.id_persoana = p.id_persoana and dc.tip_contact = 'mobil') >= 2;   
       
select * from afaceristi;
