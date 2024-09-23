import tkinter as tk
from tkinter import ttk
import requests

# Function to fetch weather data
def get_weather():
    api_key = "YOUR_API_KEY_HERE"  # Replace with your OpenWeatherMap API key
    city = city_entry.get()
    if not city:
        result_label.config(text="Please enter a city name.")
        return
    
    # Construct the API URL
    url = f"http://api.openweathermap.org/data/2.5/weather?q={city}&appid={api_key}&units=metric"
    
    try:
        response = requests.get(url)
        data = response.json()
        
        if data['cod'] == 200:
            # Extract relevant information from the API response
            city_name = data['name']
            temperature = data['main']['temp']
            weather_description = data['weather'][0]['description']
            
            # Update the result label with the weather information
            result_label.config(
                text=f"City: {city_name}\nTemperature: {temperature}°C\nWeather: {weather_description.capitalize()}"
            )
        else:
            result_label.config(text="City not found.")
    except requests.exceptions.RequestException as e:
        result_label.config(text="Error fetching data.")

# Create the main window
root = tk.Tk()
root.title("Weather App")

# Create and place widgets
city_label = ttk.Label(root, text="Enter city name:")
city_label.pack(pady=5)

city_entry = ttk.Entry(root, width=20)
city_entry.pack(pady=5)

fetch_button = ttk.Button(root, text="Get Weather", command=get_weather)
fetch_button.pack(pady=10)

result_label = ttk.Label(root, text="", font=("Arial", 14))
result_label.pack(pady=10)

# Run the application
root.mainloop()