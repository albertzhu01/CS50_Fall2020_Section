--Change the id of all of Ozai's invoices to Iroh's id
UPDATE invoices
SET customer_id = (SELECT id FROM customers WHERE name = 'Iroh')
WHERE customer_id = (SELECT id FROM customers WHERE name = 'Ozai');

--Delete Ozai from the customers table
DELETE FROM customers WHERE name = 'Ozai';