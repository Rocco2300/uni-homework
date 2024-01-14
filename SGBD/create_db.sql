alter session set "_ORACLE_SCRIPT"=true;

create tablespace agenda_telefonica_tbs
       datafile 'agenda_telefonica_tbs.dbf'
       size 5m;
      
create user agenda_telefonica
       identified by agenda
       default tablespace agenda_telefonica_tbs;

grant all privileges to agenda_telefonica;

alter session set current_schema = agenda_telefonica;
