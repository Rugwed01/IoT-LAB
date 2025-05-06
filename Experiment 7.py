import gspread
from oauth2client.service_account import ServiceAccountCredentials
from datetime import datetime
import random
import time

# Set the scope
scope = ["https://spreadsheets.google.com/feeds", "https://www.googleapis.com/auth/drive"]

# Load the service account credentials
creds = ServiceAccountCredentials.from_json_keyfile_name("path/to/your-service-account-key.json", scope)

# Authorize the client
client = gspread.authorize(creds)

# Open your Google Sheet by name or URL
sheet = client.open("Your Google Sheet Name").sheet1  # Use .sheet1 for the first worksheet

# Function to send sample data
def send_sample_data():
    for _ in range(5):  # send 5 sample entries
        timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        temperature = round(random.uniform(20.0, 30.0), 2)
        humidity = round(random.uniform(30.0, 70.0), 2)
        row = [timestamp, temperature, humidity]
        sheet.append_row(row)
        print(f"Appended: {row}")
        time.sleep(1)  # Optional delay between entries

# Run it
send_sample_data()
