~Class ATM:
   -It has a private member balance to store funds.
   -Methods:
     -deposit(float amount): Adds the specified amount to the balance.
     -withdraw(float amount): Subtracts the amount from the balance if there are sufficient funds; otherwise, it shows "Insufficient balance."
     -checkBalance(): Displays the current balance.
~main() function:
   -Creates an ATM object named myATM.
   -Deposits $1000 into the account using myATM.deposit(1000).
   -Checks the current balance using myATM.checkBalance(), which will display Current Balance: $1000.
   -Tries to withdraw $500 using myATM.withdraw(500).If the balance allows, it will display "Withdrawn: $500".Otherwise, it will show "Insufficient balance."
   -Checks the final balance using myATM.checkBalance(), which will display the updated balance after the deposit and withdrawal.
   
~Expected Output:
Deposited: $1000
Current Balance: $1000
Withdrawn: $500
Current Balance: $500

This output represents the sequence of actions taken: depositing $1000, checking the balance ($1000), withdrawing $500, and checking the updated balance ($500).

Name: Rifat Jahan Tanji
ID: 222_115_225
