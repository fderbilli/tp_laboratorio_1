float suma(float operando1, float operando2)
{
    float resultado;
    resultado=operando1+operando2;
    return resultado;
}

float resta (float operando1, float operando2)
{
    float resultado;
    resultado=operando1-operando2;
    return resultado;
}

float multiplicar(float operando1, float operando2)
{
    float resultado;
    resultado=operando1*operando2;
    return resultado;
}

float dividir(float operando1, float operando2)
{
    float resultado;
    resultado=operando1/operando2;
    return resultado;
}

float factorial(float operando1)
{
    float i;
    float resultado=1;
    i=operando1;

    while(i>0)
    {
        resultado=resultado*i;
        i--;
    }
    return resultado;
}
