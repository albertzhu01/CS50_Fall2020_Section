--Select the id and corresponding number of Red cabbages purchased by each customer, grouped by id
SELECT invoices.customer_id, COUNT(invoices.customer_id)
FROM invoices JOIN cabbages
ON invoices.id = cabbages.invoice_id
WHERE cabbages.cabbage_type = "Red"
GROUP BY invoices.customer_id;

--Example Output
1 | 108
2 | 208
3 | 90
4 | 65
5 | 75
6 | 83
8 | 48
9 | 110
10 | 54
11 | 95
12 | 106
13 | 59
14 | 127
15 | 89