import java.io.*;
import java.util.*;
import java.util.Scanner;
class DictionaryWords
{
	public static void main(String args[])
	{
		int dLength;
		Scanner ir = new Scanner(System.in);
		System.out.println("Enter the number of words in dictionary");
		dLength=ir.nextInt();
		String dictionary[] = new String[dLength];
		
		System.out.println("Enter the dictionary of words");
		for(int i=0;i<dLength;i++)
		{
			dictionary[i]=ir.next();
		}
		System.out.println("Enter the string to be searched");
		String sub=ir.next();
		/*for(int i=0;i<dLength;i++)
			System.out.println(dictionary[i]);
		*/
		boolean arr[]=new boolean[sub.length()];
		for(int i=0;i<sub.length();i++){
			arr[i]=false;
		}
		Search s = new Search();
		for(int i=0;i<sub.length();i++)
		{
			if(s.search(sub,0,i+1,dictionary)==true)
			{
				arr[i]=true;
			}
			if(arr[i]==true && i!=sub.length()-1)
			{
				for(int j=i+1;j<sub.length();j++)
				{
					if(s.search(sub,i+1,j+1,dictionary)==true)
						arr[j]=true;
				}

			}
		}
		if(arr[sub.length()-1]==true)
			System.out.println("Given string can be broken");
		else
			System.out.println("Given string can't be broken into dictionary words");
	}
	
}
class Search
{
	boolean search(String sub, int start, int end, String[] dictionary)
	{
		String key=sub.substring(start,end);
		System.out.println(key);
		for(int i=0;i<dictionary.length;i++)
		{
			if(key.equals(dictionary[i]))
				return true;
		}
		return false;
	}
}