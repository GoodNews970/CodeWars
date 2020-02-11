# meeting

# john has invited some friends. his list is:

# s = "fred:corwill;wilfred:corwill;barney:tornbull;betty:tornbull;bjon:tornbull;raphael:corwill;alfred:corwill";
# could you make a program that

# makes this string uppercase
# gives it sorted in alphabetical order by last name.
# when the last names are the same, sort them by first name. last name and first name of a guest come in the result between
# parentheses separated by a comma.

# so the result of function meeting(s) will be:

# "(corwill, alfred)(corwill, fred)(corwill, raphael)(corwill, wilfred)(tornbull, barney)(tornbull, betty)(tornbull, bjon)"
# it can happen that in two distinct families with the same family name two people have the same first name too.

# notes
# you can see another examples in the "sample tests".

meeting <- function(s) {
    result <- lapply(unlist(strsplit(s, split = ";")), function(x) {
        paste0("(", toupper(unlist(strsplit(x, split = ":")))[2], ", ",
        toupper(unlist(strsplit(x, split = ":")))[1], ")", collapse = "")
    })
    return(paste(sort(unlist(result)), collapse = ""))
}
