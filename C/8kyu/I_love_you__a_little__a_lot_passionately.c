/* I love you, a little , a lot, passionately ... not at all

Who remembers back to their time in the schoolyard, when girls would take a flower and tear its petals,
saying each of the following phrases each time a petal was torn:

I love you
a little
a lot
passionately
madly
not at all
When the last petal was torn there were cries of excitement, dreams, surging thoughts and emotions.

Your goal in this kata is to determine which phrase the girls would say for a flower of a given number of petals,
where nb_petals > 0. */

const char* how_much_i_love_you(int nb_petals) {    
  return (nb_petals % 6 == 1) ? "I love you" :
         (nb_petals % 6 == 2) ? "a little" :
         (nb_petals % 6 == 3) ? "a lot" :
         (nb_petals % 6 == 4) ? "passionately" :
         (nb_petals % 6 == 5) ? "madly" :
         (nb_petals % 6 == 0) ? "not at all" : "";
}