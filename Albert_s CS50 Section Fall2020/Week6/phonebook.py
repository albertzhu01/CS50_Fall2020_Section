import csv
import sys

if len(sys.argv) != 2:
    sys.exit("Usage: python phonebook.py data.csv")

# Open CSV and read in data
f = open(sys.argv[1])
reader = csv.DictReader(f)

# Check if the headers of the columns are "name" and "number"
fields = reader.fieldnames
if "name" not in fields or "number" not in fields:
    sys.exit("File must have name and number columns")

# Print out entries of each row
for row in reader:
    name = row["name"]
    number = row["number"]
    print(f"{name}'s phone number is {number}")

# Close file
f.close()