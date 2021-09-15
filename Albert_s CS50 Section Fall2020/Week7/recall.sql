--Select number of cabbages that were in the defective batch
SELECT COUNT(id) FROM cabbages WHERE batch_id = (SELECT batch_id FROM cabbages WHERE id = 433);

--Example output
112


--Select average value of cabbages that were in the defective batch
SELECT AVG(value) FROM cabbages WHERE batch_id = (SELECT batch_id FROM cabbages WHERE id = 433);

--Example ouptut
1.866875


--Select the total value of cabbages that were in the defective batch
SELECT SUM(value) FROM cabbages WHERE batch_id = (SELECT batch_id FROM cabbages WHERE id = 433);

--Example output
209.09


--Select the name, email of customers who purchased cabbages that were in the defective batch
SELECT name, email FROM customers WHERE id IN
    (SELECT DISTINCT(customer_id) FROM invoices WHERE id IN
        (SELECT invoice_id FROM cabbages WHERE batch_id =
            (SELECT batch_id FROM cabbages WHERE id = 433))) ORDER BY name;

--Example output
name | email
Aang | aang@team.avatar
Iroh | iroh@fire.gov
Katara | katara@team.avatar
Vaatu | vaatu@spirit.gov
Wan Shi Tong | owl.spirit@fas.harvard.edu
Zuko | zuko@fire.gov