# Basic-Data-Analysis-Program-BDAP-
Data Analysis Program (BDAP) is a software program to automatically enable users to analyze a data file provided by the user. The program should enable users to analyze and generate reports. The program will keep track (log) of the user and the operations performed until the user exits the system. This program is a console-based program and can generate text-files and html files. The program generally computes statistical computation after reading a text file following a designated format. 

There are two types of users in this program. The dministrator is the only user who can create users and deletes them. Another user is the buyer. The buyer can load data files, enter statistical analysis menu, change password, and view history of the account's previous activities.
The user profile needs to follow the following items:
<ul>
  <li>Username</li>
  <li>Password, (must start with letter, must contain a digit and a capital letter)</li>
  <li> User type (Administrator or Buyer) </li>
  <li> status (active, deleted) </li>
 </ul>
 
 To log in, the pre-created administrator profiles have been created based on `database.txt`
 
The data file `abc.txt)` has the following format:
<ul>
  <li> 5 ---> number of columns </li>
  <li> Id,Age,math,science,malay ---> column titles </li>
  <li> 100 ---> number of rows </li>
  <li> 11920100,19,93,92,87 ---> row 0 with data separated by , </li>
  <li> 11920111,20,76,87,75 ---> row 1 </li>
</ul>

In the statistical analysis menu, user can compute the following computations
<ul>
  <li> Find Minimum User <-- Minimum of a specific column / Minimum of a complete row (minimum of all the columns) </li>
  <li> Find Maximum User <-- Maximum of a specific column / Maximum of a complete row </li>
  <li> Median User <-- Median of a specific column / Median of a complete row  </li>
  <li> Mean User <-- Mean of a specific column / Mean of a complete row </li>
  <li> Variance User <-- Variance of a specific column / Variance of a complete row </li>
  <li> Standard Deviation User <--  STDV of a specific column / STDV of a complete row </li>
  <li> Correlation between any selected 2 columns <-- Compute the Pearson’s correlation between any two selected columns showing the table of computation of the correlation (correlation measures the strength of
association between two quantitative
variables).   </li>
  <li> Distinct data members User <-- Display the distinct numbers (no
repetition) and a count of the occurrences of
each number (frequency) in a tabular form.  </li>
  <li> Plot A histogram (text mode) User <-- For any selected column, plot a
histogram for the data colum </li>
</ul>

