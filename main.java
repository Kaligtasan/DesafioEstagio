import java.util.Scanner;

public class main
{

	private static String pegaTexto()  //Função para pegar o input do usuário.
	{
		Scanner input = new Scanner(System.in);

		return input.nextLine();
	}

	public static void main(String[] args)
	{
		String texto;

		System.out.println("Digite o texto: \n");
		texto = pegaTexto();

		int i = 0;
		int a = 0;

		for(i = 0; i < texto.length(); i++)  //Verifica a existência de 'a's ou 'A's e soma no contador.
		{
			if(texto.charAt(i) == 'a' || texto.charAt(i) == 'A')
			{
				a++;
			}
		}

		System.out.println("O texto possui " +a +" a's ");
	}
}