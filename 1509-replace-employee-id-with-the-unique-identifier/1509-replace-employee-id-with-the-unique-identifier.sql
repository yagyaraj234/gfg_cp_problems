# Write your MySQL query statement below

# SELECT * FROM Employees 
# JOIN EmployeeUNI ON EmployeeUNI.unique_id = Employees.id;

SELECT unique_id, name FROM Employees 
LEFT JOIN EmployeeUNI USING(id);