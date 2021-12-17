#include <iostream>

using namespace std;

class examen
{
public:
  int n, m, opc;
  int A[20], B[20], C[20];

  void opcion();
  void suma();
  void resta();
  void multi();
  void division();
  void sumacons();
  void promedio();
  void concat();
};

void examen::opcion()
{

  cout << " \n 1 - Realizar otra operacion \n\n2 - Regresar al menu principal\n\n3 - Salir. " << endl;
}

void examen::suma()
{
  cout << "Suma:" << endl;
  do
  {
    do
    {
      cout << "Ingresa el tamaC1o del primer arreglo de mayor a 0 y menor a 20: ";
      cin >> n;

    } while (n < 0 || n > 20);
    cout << n << endl;

    do
    {
      cout << "Ingresa el tamaC1o del segundo arreglo  mayor a 0 y menor a 20: ";
      cin >> m;

    } while (m < 0 || m > 20);
    cout << m << endl;

    if (n == 0 && m == 0)
    {
      cout << "La suma es nula" << endl;
    }
  } while (n == 0 && m == 0);

  cout << "Ingresa el primer " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "--------" << endl;
    cin >> A[i];
  }

  cout << " Ingrese el segundo " << endl;

  for (int i = 0; i < m; i++)
  {
    cout << "--------" << endl;
    cin >> B[i];
  }
  /***************************
   *
   *            SUMA
   *
   * *************************/
  cout << "La suma es: " << endl;

  if (n > m)
  {
    for (int i = 0; i < m; i++)
    {

      C[i] = A[i] + B[i];

      cout << "Suma: " << C[i] << endl;
    }
  }

  for (int i = m; i <= n - 1; i++)
  {
    C[i] = A[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m > n)
  {
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] + B[i];
      cout << "Suma: " << C[i] << endl;
    }
  }

  for (int i = n; i <= m - 1; i++)
  {
    C[i] = B[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m == n)
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] + B[i];
      cout << "Suma: [" << C[i] << "]" << endl;
    }
}

void examen::resta()
{

  cout << "Resta: " << endl;
  do
  {
    do
    {
      cout << "Ingresa el tamaC1o del primer arreglo de mayor a 0 y menor a 20: ";
      cin >> n;

    } while (n < 0 || n > 20);
    cout << n << endl;

    do
    {
      cout << "Ingresa el tamaC1o del segundo arreglo  mayor a 0 y menor a 20: ";
      cin >> m;

    } while (m < 0 || m > 20);
    cout << m << endl;

    if (n == 0 && m == 0)
    {
      cout << "La suma es nula" << endl;
    }
  } while (n == 0 && m == 0);

  cout << "Ingresa el primer " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "--------" << endl;
    cin >> A[i];
  }

  cout << " Ingrese el segundo " << endl;

  for (int i = 0; i < m; i++)
  {
    cout << "--------" << endl;
    cin >> B[i];
  }

  /***************************
   *
   *      RESTA
   *
   * *************************/
  cout << "La Resta es: " << endl;

  if (n > m)
  {
    for (int i = 0; i < m; i++)
    {

      C[i] = A[i] - B[i];

      cout << "Resta: " << C[i] << endl;
    }
  }

  for (int i = m; i <= n - 1; i++)
  {
    C[i] = A[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m > n)
  {
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] - B[i];
      cout << "Resta: " << C[i] << endl;
    }
  }

  for (int i = n; i <= m - 1; i++)
  {
    C[i] = B[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m == n)
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] - B[i];
      cout << "Resta: [" << C[i] << "]" << endl;
    }
}

void examen::multi()
{
  cout << "Multiplicacion: " << endl;

  do
  {
    do
    {
      cout << "Ingresa el tamaC1o del primer arreglo de mayor a 0 y menor a 20: ";
      cin >> n;

    } while (n < 0 || n > 20);
    cout << n << endl;

    do
    {
      cout << "Ingresa el tamaC1o del segundo arreglo  mayor a 0 y menor a 20: ";
      cin >> m;

    } while (m < 0 || m > 20);
    cout << m << endl;

    if (n == 0 && m == 0)
    {
      cout << "La suma es nula" << endl;
    }
  } while (n == 0 && m == 0);

  cout << "Ingresa el primer " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "--------" << endl;
    cin >> A[i];
  }

  cout << " Ingrese el segundo " << endl;

  for (int i = 0; i < m; i++)
  {
    cout << "--------" << endl;
    cin >> B[i];
  }

  /***************************
   *
   *      Multipicacion
   *
   * *************************/
  cout << "La Multiplicacion es: " << endl;

  if (n > m)
  {
    for (int i = 0; i < m; i++)
    {

      C[i] = A[i] * B[i];

      cout << "Multiplicacion: " << C[i] << endl;
    }
  }

  for (int i = m; i <= n - 1; i++)
  {
    C[i] = A[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m > n)
  {
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] * B[i];
      cout << "Multiplicacion: " << C[i] << endl;
    }
  }

  for (int i = n; i <= m - 1; i++)
  {
    C[i] = B[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m == n)
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] * B[i];
      cout << "Multiplicacion: [" << C[i] << "]" << endl;
    }
}

void examen::division()
{
  cout << "Division: " << endl;

  do
  {
    do
    {
      cout << "Ingresa el tamaC1o del primer arreglo de mayor a 0 y menor a 20: ";
      cin >> n;

    } while (n < 0 || n > 20);
    cout << n << endl;

    do
    {
      cout << "Ingresa el tamaC1o del segundo arreglo  mayor a 0 y menor a 20: ";
      cin >> m;

    } while (m < 0 || m > 20);
    cout << m << endl;

    if (n == 0 && m == 0)
    {
      cout << "La suma es nula" << endl;
    }
  } while (n == 0 && m == 0);

  cout << "Ingresa el primer " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "--------" << endl;
    cin >> A[i];
  }

  cout << " Ingrese el segundo " << endl;

  for (int i = 0; i < m; i++)
  {
    cout << "--------" << endl;
    cin >> B[i];
  }

  /***************************
   *
   *      Division
   *
   * *************************/
  cout << "La Division es: " << endl;

  if (n > m)
  {
    for (int i = 0; i < m; i++)
    {

      C[i] = A[i] - B[i];

      cout << "Division: " << C[i] << endl;
    }
  }

  for (int i = m; i <= n - 1; i++)
  {
    C[i] = A[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m > n)
  {
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] - B[i];
      cout << "Division: " << C[i] << endl;
    }
  }

  for (int i = n; i <= m - 1; i++)
  {
    C[i] = B[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m == n)
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] - B[i];
      cout << "Division: [" << C[i] << "]" << endl;
    }
}

void examen::sumacons()
{

  int a = 0, b = 0, res = 0;

  cout << "Ingrese el inicial: " << endl;
  cin >> a;
  cout << "Ingrese el final: " << endl;
  cin >> b;

  if (a < b)
  {
    cout << "\nLa res de la sucecion es:" << endl;
    for (a; a <= b; a++)
      res += a;
    cout << "--> " << res << endl;
  }

  else if (a > b)
  {
    cout << "\nLa suma de la sucesion es:" << endl;

    for (b; b <= a; b++)
      res += b;
    cout << "--> " << res << endl;
  }
}

void examen::promedio()
{

  int A[50], n;
  float prom, sum = 0;

  cout << " Ingresa el tamano de las materias a evaluar: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "valores [" << i << "]:";
    cin >> A[i];
    sum = sum + A[i];
  }
  prom = sum / n;
  cout << "los elementos son: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << " " << A[i] << endl;
  }
  cout << "La suma es:" << sum << endl;
  cout << "El promedio es: " << prom;
}

void examen::concat()
{

  cout << "ingrese el tamano del primer arreglo: ";
  cin >> n;
  cout << "ingrese el tamano del segundo arreglo: ";
  cin >> m;

  int A[n], B[m];

  cout << " Ingrese los valores a concatenar \n";
  for (int i = 0; i < n; i++)
  {
    cout << "ingrese: ";
    cin >> A[i];
  }
  cout << " Ingrese los valores a concatenar \n";
  for (int i = 0; i < m; i++)
  {
    cout << "ingrese: ";
    cin >> B[i];
  }

  int e = 0, C[m + n];

  for (int i = 0; i < n; i++)
  {
    C[i] = A[i];
    e++;
  }
  for (int j = 0; j < m; j++)
  {
    C[e] = B[j];
    e++;
  }
  cout << "el ordenamiento \n";
  for (int i = 0; i < (n + m); i++)
  {
    cout << C[i] << endl;
  }
}

int main()
{

  examen retorno;
  int opc;
  int opc2;

  do
  {
    cout << "Elige la operacion que deseas realizar\n\n 1. Suma de dos arreglos \n 2 -  Resta de dos arreglos\n 3 - Multiplicacionde dos arreglos\n 4 - Divisionde dos arreglos\n 5 - Suma consecutivade un arreglo \n 6 - Calcular promediode un arreglo\n 7 - Concatenacionde dos arreglos\n 8 - Salir " << endl;
    cin >> opc;

    if (opc == 1)
    {
      retorno.suma();

      do
      {
        retorno.opcion();
        cin >> opc2;

        if (opc2 == 1)
        {
          retorno.suma();
        }
        else if (opc2 == 3)
        {
          cout << "adios";
          return 0;
        }

      } while (opc2 != 2);
    }

    if (opc == 2)
    {
      retorno.resta();

      do
      {
        retorno.opcion();
        cin >> opc2;

        if (opc2 == 1)
        {
          retorno.resta();
        }
        else if (opc2 == 3)
        {
          cout << "adios";
          return 0;
        }

      } while (opc2 != 2);
    }

    if (opc == 3)
    {
      retorno.multi();

      do
      {
        retorno.opcion();
        cin >> opc2;

        if (opc2 == 1)
        {
          retorno.multi();
        }
        else if (opc2 == 3)
        {
          cout << "adios";
          return 0;
        }

      } while (opc2 != 2);
    }

    if (opc == 4)
    {
      retorno.division();

      do
      {
        retorno.opcion();
        cin >> opc2;

        if (opc2 == 1)
        {
          retorno.division();
        }
        else if (opc2 == 3)
        {
          cout << "adios";
          return 0;
        }

      } while (opc2 != 2);
    }

    if (opc == 5)
    {
      retorno.sumacons();

      do
      {
        retorno.opcion();
        cin >> opc2;

        if (opc2 == 1)
        {
          retorno.sumacons();
        }
        else if (opc2 == 3)
        {
          cout << "adios";
          return 0;
        }

      } while (opc2 != 2);
    }

    if (opc == 6)
    {
      retorno.promedio();

      do
      {
        retorno.opcion();
        cin >> opc2;

        if (opc2 == 1)
        {
          retorno.promedio();
        }
        else if (opc2 == 3)
        {
          cout << "adios";
          return 0;
        }

      } while (opc2 != 2);
    }

    if (opc == 7)
    {
      retorno.concat();

      do
      {
        retorno.opcion();
        cin >> opc2;

        if (opc2 == 1)
        {
          retorno.concat();
        }
        else if (opc2 == 3)
        {
          cout << "adios";
          return 0;
        }

      } while (opc2 != 2);
    }

  } while (opc != 8);
}