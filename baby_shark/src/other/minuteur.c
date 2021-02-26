#include "../../include/header/baby_shark.h"

int minuteur(void)
{

      int h, min, s, day, mois, an;
      time_t now;
      time(&now);
      struct tm *local = localtime(&now);

      h = local->tm_hour;
      min = local->tm_min;
      s = local->tm_sec;
      day = local->tm_mday;
      mois = local->tm_mon + 1;
      an = local->tm_year;
      while (mois > 0)
      {
            switch (mois)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                  day += 31;
                  break;
            case 2:
                  day += 28;
                  break;
            case 4:
            case 6:
            case 9:
            case 11:
                  day += 30;
                  break;
            }
            mois--;
      }
      min += h * 60 + day * 60 * 24 + an * 365.25 * 24 * 60;
      s += min * 60;
      return s;
}
