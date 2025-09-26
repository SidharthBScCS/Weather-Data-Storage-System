**Weather Data Storage System**

**Problem Staement**
A Weather Data Storage System is a software solution designed to
systematically collect, store, and manage weather-related data such as temperature,
humidity, and atmospheric conditions. In the context of this assignment, it focuses on
organizing temperature records based on date and city using a structured data format like
2D arrays and Abstract Data Types (ADTs). This system enables efficient insertion,
retrieval, and analysis of weather data over time, supporting both complete and sparse
datasets.

**Attributes**

**1.WeatherManagementSystem Class**
- **Insert()** -> This function is used to insert the Date, City & Temperature.
- **Retrieve()** -> This function is used to display the Temperature according to Date & City entered by the user.
- **Delete()** -> This function is used to delete the data according to the date & City entered by the user.
- **DisplayChoice()** -> This function is used to display the choice for the user.

**2.Weather2DArray Class**
- **populateArray()** -> This function is used to create a 2D Array.
- **rowMajorAccess()** -> This function is used to access the 2D Array in row-wise.
- **columnMajorAccess()** -> This function is used to access the 2D Array in column-wise.
- **handleSparseData()** -> This function is used to handel missing values in 2D Array, which will replace by NULL or NA
- **analyzeComplexity()** -> This function is used to display the time complexity and space complexity.


