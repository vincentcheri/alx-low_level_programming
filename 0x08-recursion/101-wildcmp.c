#include "main.h"

/**
 * wildcmp - compares two strings considering the wildcard *
 * @s1: first string to be compared
 * @s2: second string to be compared, can contain the special character *
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */


int wildcmp(const char *wild, const char *string) {
  /* Written by Jack Handy - jakkhandy@hotmail.com */

  const char *cp = NULL, *mp = NULL;

  while ((*string) && (*wild != '*')) {
    if ((*wild != *string) && (*wild != '?')) {
      return 0;
    }
    wild++;
    string++;
  }

  while (*string) {
    if (*wild == '*') {
      if (!*++wild) {
        return 1;
      }
      mp = wild;
      cp = string+1;
    } else if ((*wild == *string) || (*wild == '?')) {
      wild++;
      string++;
    } else {
      wild = mp;
      string = cp++;
    }
  }

  while (*wild == '*') {
    wild++;
  }
  return !*wild;
}

int wildicmp(const char *wild, const char *string) {
  const char *cp = NULL, *mp = NULL;

  while ((*string) && (*wild != '*')) {
    if ((tolower(*wild) != tolower(*string)) && (*wild != '?')) {
      return 0;
    }
    wild++;
    string++;
  }

  while (*string) {
    if (*wild == '*') {
      if (!*++wild) {
        return 1;
      }
      mp = wild;
      cp = string+1;
    } else if ((tolower(*wild) == tolower(*string)) || (*wild == '?')) {
      wild++;
      string++;
    } else {
      wild = mp;
      string = cp++;
    }
  }

  while (*wild == '*') {
    wild++;
  }
  return !*wild;
}
