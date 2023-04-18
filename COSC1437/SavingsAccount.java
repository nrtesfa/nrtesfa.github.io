package lab5;

public class SavingsAccount extends BankAccount {

	private double rate = 0.025;
	private int savingsNumber = 0;
	private String accountNumber;
	
	public SavingsAccount(String name, double amount) {
		super (name,amount);
		accountNumber = super.getAccountNumber()+"-"+savingsNumber;
		}
	public SavingsAccount(SavingsAccount oldAccount,
			double amount) {
		super(oldAccount,amount);
		savingsNumber = oldAccount.savingsNumber+1;
		accountNumber = super.getAccountNumber()+ "-" + savingsNumber;
	}
	public void postInterest() {
	    double interest = getBalance()*rate;
	    deposit(interest);
	}
	public String getAccountNumber()
	{
	return this.accountNumber;
	}
}
