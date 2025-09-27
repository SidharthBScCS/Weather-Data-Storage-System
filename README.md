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

**3.Main**
- **switch-case** -> This will the user a choice for:
                      - inserting the data.
                      - retrieving the data.
                      - deleting the data.
                      - accessing the 2D array in row wise.
                      - accessing the 2D array in column wise.
                      - to analyze the time and space complexity nehind this problem.

**Explanation of Code**
- Purpose of the Constructor -> It automatically runs when an object of a class is created. This ensured the object starts with known default values. Count = 0 initializes that no records at the start.
- Insert function -> Adds a new record into the 2D array with taking the input from the user of Date,City,Temperature. Increases the count by 1.
- Retrieve function -> Searches the 2D arrays froa specific date & city with taking the input from the user of Date,City and returns the temperature of the corresponding City&Date.
- Delete function -> Deletes the 2D array data according to Date&City given by the user.Decreases the count by 1.
- getdates(),getCities(),getTemperature(),getCount() -> Return the 2D array and the count.
- DisplayChoice() -> Prints the menu for the user to choose.
- Weather3DArray -> This class is used to store the data input by the user in form of 2D array from better data storage.
- populateArray() -> It is used to fill the data of City&Date as rows and cols with the temperature.
- rowMajorAccess() -> It is used to just print the 2D Array table row by row.
- columnMajorAccess() -> It is used to just print the 2D Array table column by column.
- handleSpareData() -> it is used to handle null values if the user doesn't input a value in row or column this function fwill handle it and replaces it with "NULL".
- analyzeComplexity() -> It prints the time complexity and space complexity.

  **Time Complexity**
  - In Insert() function no loops are involved it only adds a new record.So, the time complexity is O(1).
  - In Retrive() function it loops through count and compare Date[i] & City[i].So,the time complexity is O(n) because all the n records are checked.
  - In Delete() function it loops through count and finds the target.So the time complexity is O(n) because it searches & shifting.
  - In populatearray() function it finds the unique cities (Rows*Count) and also finds the unique dates (Cols*Count) therefore the time complexity is O(n^2).
  - In rowMajorAccess() function prints the row by row. So time complexity is O(Rows*Cols).
  - In columnMajorAccess() function prints the column by column. So time complexity id O(Rows*Cols).
  - In handleSpraseDate() function loop through Rows and Col. So time complexity is O(Rows*Cols).

**Space Complexity**
- Space complexity is O(n+Rows*Cols).

**What we learnt through this**
- Data Storage
- 2D Array Operations
- Constructors
- Time Complexity
- Space Complexity
- Practical Data Structures concepts

  **Code Output**
  <img width="1362" height="717" alt="Screenshot (30)" src="https://github.com/user-attachments/assets/ca37c8b3-414d-455a-bba7-c1f5e6de4106" />

<img width="1366" height="738" alt="Screenshot (31)" src="https://github.com/user-attachments/assets/bed4963d-1d1e-44b7-9280-ad11019180b5" />

**Student Details**
**Name**       :     Sidharth Krishna S
**RollNo**     :     2401720003
**Course**     :     BSc Computer Science
**Semester**   :     3rd
**Assignment** :     | Theory Assignment 1 | Data Structures |
