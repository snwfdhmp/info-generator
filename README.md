# info-generator (still just an idea)

A random info generator to fill databases.

Example :

- input file :

```sql
INSERT INTO users VALUES(@firstname, @lastname, @dob, @phone)
```
- processing

```
$ info-generator input.txt
```

- output :

```sql
INSERT INTO users VALUES("John", "Rachid", "19/03/1995", "0382197438")
```