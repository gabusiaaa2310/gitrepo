DROP TABLE IF EXISTS nazwiska;
CREATE TABLE nazwiska (
    nr_ucznia INTEGER PRIMARY KEY NOT NULL, --pole musi miec dane 
    nazwisko TEXT(20) NOT NULL,
    imie1 TEXT(20),
    imie2 TEXT(20) 
);

DROP TABLE IF EXISTS dane_osobowe;
CREATE TABLE dane_osobowe (
    nr_ucznia INTEGER,
    dzien INTEGER,
    miesiac INTEGER,
    rok INTEGER,
    miejsce_urodzenia TEXT(20) DEFAULT "Gdańsku",
    wojewodztwo TEXT(25) DEFAULT "pomorskie",
    FOREIGN KEY (nr_ucznia) REFERENCES nazwiska(nr_ucznia)
);

DROP TABLE IF EXISTS oceny;
CREATE TABLE oceny (
    nr_ucznia INTEGER,
    zach TEXT(10), 
    rel_Ety DECIMAL DEFAULT NULL, --uczniowie moga nie miec oceny
    jpol DECIMAL,
    jang DECIMAL,
    jniem DECIMAL, 
    mat DECIMAL, 
    hist DECIMAL, 
    geog DECIMAL, 
    biol DECIMAL, 
    fiz DECIMAL,
    che DECIMAL,
    tech DECIMAL,
    info DECIMAL DEFAULT NULL, 
    plas DECIMAL, 
    po DECIMAL ,
    wf DECIMAL DEFAULT NULL,
    FOREIGN KEY (nr_ucznia) REFERENCES nazwiska(nr_ucznia)
);

INSERT INTO nazwiska(nr_ucznia, nazwisko, imie1, imie2)
VALUES(9201, "Adamczuk", "Agata", "");
INSERT INTO nazwiska
VALUES (9802, "Adamiuk", "Marta", ""); 

--sqlite3 baza.db < szkola.sql
