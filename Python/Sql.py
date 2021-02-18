import sqlite3
con=sqlite3.connect("Test.db")
cur=con.cursor
con.execute("create table test(name varchar(20));")