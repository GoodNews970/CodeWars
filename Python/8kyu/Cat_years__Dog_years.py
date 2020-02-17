""" Cat years, Dog years

Kata Task
I have a cat and a dog.

I got them at the same time as kitten/puppy. That was humanYears years ago.

Return their respective ages now as [humanYears,catYears,dogYears]

NOTES:

humanYears >= 1
humanYears are whole numbers only
Cat Years
15 cat years for first year
+9 cat years for second year
+4 cat years for each year after that
Dog Years
15 dog years for first year
+9 dog years for second year
+5 dog years for each year after that
References

http://www.catster.com/cats-101/calculate-cat-age-in-cat-years
http://www.slate.com/articles/news_and_politics/explainer/2009/05/a_dogs_life.html """


def human_years_cat_years_dog_years(human_years):
    if human_years == 1:
        catYears = 15
        dogYears = 15
    elif human_years == 2:
        catYears = 15+9
        dogYears = 15+9
    else:
        catYears = 15+9+(4*human_years)
        dogYears = 15+9+(5*human_years)
    return [human_years, catYears, dogYears]
