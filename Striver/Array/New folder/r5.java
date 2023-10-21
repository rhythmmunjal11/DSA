// Java Program to implement the
// above approach
import java.util.*;
class r5{

// Function to print all the
// numbers up to n in
// lexicographical order
static void lexNumbers(int n)
{
	Vector<String> s = new Vector<String>();

	for (int i = 1; i <= n; i++)
	{
		s.add(String.valueOf(i));
	}

	Collections.sort(s);
	Vector<Integer> ans = new Vector<Integer>();
	for (int i = 0; i < n; i++)
		ans.add(Integer.valueOf(s.get(i)));

	for (int i = 0; i < n; i++)
		System.out.print(ans.get(i) + " ");
}
// Driver Program
public static void main(String[] args)
{
	int n = 15;
	lexNumbers(n);
}
}


