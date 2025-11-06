# Include <stdio.h>

// Função pra calcular a média das notas 
float calcular_media (float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

//função par determinar se o aluno passou ou não 
cast char* determinar__aprovação (float media) {
    if (media > = 6.0) {
        return "aprovado";
    } else {
        return "reprovado";
    }
}

Int main () {
    float nota1, nota2, nota3, media;

    //Entrada e dados
    printf ("Digite as três notas do aluno");
    Scanf ("%f%f%f", & nota1, & nota2, & nota3);
    
   // cálculo da média 
   média = calcular_media (nota1, nota2, nota3);

   // Determine e mostrar reultado
   prinf ("A média das nota é: % 2f\n", media);
   prinf ("Resultado % s\n", determinar_aprovação(meia));

   return 0;
    }