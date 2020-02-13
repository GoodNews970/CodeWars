/* Double Char

Given a string, you have to return a string in which each character (case-sensitive) is repeated once.

doubleChar("String") ==> "SSttrriinngg"

doubleChar("Hello World") ==> "HHeelllloo  WWoorrlldd"

doubleChar("1234!_ ") ==> "11223344!!__  " */

function doubleChar(str) {
    var ret = [];
    for (let index = 0; index < str.length; index++) {
        ret.push(str[index]);
        ret.push(str[index]);
    }
    return ret.toString().replace(/,/g,'');
}
