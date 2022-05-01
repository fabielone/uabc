// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
/*
Función en C que pida el mes y día de nacimiento de una persona y el programa le despliega
el signo del zodiaco que le corresponde y su correspondiente horoscopo del Dia.

*/
// FRG_A5_1.C
// DONE

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int month, day;

    puts("ingrese mes de nacimiento:");
    scanf("%d", &month);

    puts("ingrese dia de nacimiento");
    scanf("%d", &day);

    switch (month)
    {
    case 1:
        if (day < 20)
        {
            puts("su signo es: Capricorn ");
            puts("su horoscopo es : Make sure you are willing to accept any new connections that come into your life. Your romantic nature is going to pay dividends.");
        }
        else
        {
            puts("su signo es:Aquarius ");
            puts("su horoscopo es :There is a focus placed on your work life, so you might be considering a chance of career. Take a step into the dark. ");
        }

        break;
    case 2:
        if (day < 19)
        {
            puts("su signo es: Aquarius ");
            puts("su horoscopo es :There is a focus placed on your work life, so you might be considering a chance of career. Take a step into the dark. ");
        }
        else
        {
            puts("su signo es: Pisces ");
            puts("su horoscopo es :Follow what you believe to be the right thing to do. You will not regret it. ");
        }

        break;

    case 3:
        if (day < 21)
        {
            puts("su signo es: Pisces ");
            puts("su horoscopo es : Follow what you believe to be the right thing to do. You will not regret it.");
        }
        else
        {
            puts("su signo es: Aries ");
            puts("su horoscopo es :There is an emphasis placed on your home life today. Try to declutter some things if you can. ");
        }

        break;

    case 4:
        if (day < 21)
        {
            puts("su signo es: Aries ");
            puts("su horoscopo es :There is an emphasis placed on your home life today. Try to declutter some things if you can. ");
        }
        else
        {
            puts("su signo es: Taurus ");
            puts("su horoscopo es :Be open to new opportunities, as you don't know what is around the corner. Stay positive. ");
        }

        break;

    case 5:
        if (day < 21)
        {
            puts("su signo es: Taurus ");
            puts("su horoscopo es :Be open to new opportunities, as you don't know what is around the corner. Stay positive. ");
        }
        else
        {
            puts("su signo es: Gemini ");
            puts("su horoscopo es :Let your flirtatious side come to the fore. Have a think about your future goals. ");
        }

        break;

    case 6:
        if (day < 21)
        {
            puts("su signo es: Gemini ");
            puts("su horoscopo es :Let your flirtatious side come to the fore. Have a think about your future goals. ");
        }
        else
        {
            puts("su signo es: Cancer ");
            puts("su horoscopo es :Catch up with some old friends and reconnect with them. Treat yourself if the opportunity arises. ");
        }

        break;

    case 7:

        if (day < 23)
        {
            puts("su signo es: Cancer ");
            puts("su horoscopo es :Catch up with some old friends and reconnect with them. Treat yourself if the opportunity arises. ");
        }
        else
        {
            puts("su signo es: Leo ");
            puts("su horoscopo es :Get in touch with your emotions and express them if necessary. Have trust in others ");
        }
        break;

    case 8:

        if (day < 23)
        {
            puts("su signo es: Leo ");
            puts("su horoscopo es :Get in touch with your emotions and express them if necessary. Have trust in others ");
        }
        else
        {
            puts("su signo es: Virgo ");
            puts("su horoscopo es :Allow yourself to do some exploring, most likely in a new place. There could be some developments in your relationship, too. ");
        }
        break;

    case 9:
        if (day < 23)
        {
            puts("su signo es:Virgo ");
            puts("su horoscopo es :Allow yourself to do some exploring, most likely in a new place. There could be some developments in your relationship, too. ");
        }
        else
        {
            puts("su signo es: Libra");
            puts("su horoscopo es :Create time to see some friends or family members. Set out some targets that you hope to achieve. ");
        }
        break;

    case 10:
        if (day < 23)
        {
            puts("su signo es: Libra ");
            puts("su horoscopo es :Create time to see some friends or family members. Set out some targets that you hope to achieve. ");
        }
        else
        {
            puts("su signo es: Scorpio ");
            puts("su horoscopo es : The question of commitment is going to come up. Keep an eye out for any chances to develop yourself.");
        }
        break;

    case 11:
        if (day < 22)
        {
            puts("su signo es: Scorpio");
            puts("su horoscopo es :The question of commitment is going to come up. Keep an eye out for any chances to develop yourself. ");
        }
        else
        {
            puts("su signo es: Sagittarius ");
            puts("su horoscopo es :Try to create a routine that you can follow. Create some memories with your loved ones by organising a trip somewhere. ");
        }
        break;

    case 12:
        if (day < 22)
        {
            puts("su signo es: Sagitarius ");
            puts("su horoscopo es :Try to create a routine that you can follow. Create some memories with your loved ones by organising a trip somewhere. ");
        }
        else
        {
            puts("su signo es: Capricorn");
            puts("su horoscopo es :Make sure you are willing to accept any new connections that come into your life. Your romantic nature is going to pay dividends. ");
        }
        break;

    default:
        break;
    }
}