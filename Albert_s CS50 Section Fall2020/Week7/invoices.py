from cs50 import get_string, get_float, SQL

db = SQL("sqlite:///cabbages.db")

# Add new invoice
while True:
    name = get_string("Name: ")
    email = get_string("Email: ")
    val = get_float("Total Value: ")

    # If no input, then stop adding invoices
    if not name or not email or not val:
        break

    # Query for customer
    customer = db.execute("SELECT id FROM customers WHERE name = ? AND email = ?", name, email)

    # Check to make sure customer exists
    if len(customer) == 0:
        print(f"No customer with name {name} and email {email}.")
        continue

    # Add invoice
    db.execute("INSERT INTO invoices (customer_id, total_value) VALUES (?, ?)", customer[0]["id"], val)
    print(f"Added invoice of ${val} for {name}")