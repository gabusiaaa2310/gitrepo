DROP TABLE IF EXISTS pracownicy;
CREATE TABLE pracownicy 
(
    id_pracownika INTEGER PRIMARY KEY AUTOINCREMENT,
    imie TEXT (15),
    nazwisko TEXT(30),
    kod STRING(10),
    miasto_z TEXT(25),
    ulica TEXT(35),
    data_u DATE,
    miasto_u TEXT(30)
);

DROP TABLE OF EXISTS kontakty;
CREATE TABLE kontakty
(
    id_pracownika INTEGER NOT NULL,
    typ_k BOOLEAN,
    kontakt STRING(15),
    uwagi TEXT,
    FOREGIN KEY (id_pracownika) REFERENCES pracownicy (id_pracownika
);

DROP TABLE IF EXISTS stanowiska;
CREATE TABLE stanowiska
(
    id_stanowiska INTEGER PRIMARY KEY AUTOINCREMENT,
    stanowisko TEXT(30)
);

DROP TABLE OF EXISTS place;
CREATE TABLE place
(
    id_p INTEGER NOT NULL,
    id_s INTEGER NOT NULL,
    placa INTEGER,
    data_z DATE,
    FOREIGN KEY (id_p) REFERENCES kontakty(id_pracownika),
    FOREIGN KEY (id_s) REFERENCES stanowiska(id_stanowiska)
);
