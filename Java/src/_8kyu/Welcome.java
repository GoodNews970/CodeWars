/* Welcome

Your start-up's BA has told marketing that your website has a large audience in Scandinavia and surrounding countries.
Marketing thinks it would be great to welcome visitors to the site in their own language. Luckily you already use an API that
detects the user's location, so this is an easy win.

The Task
Think of a way to store the languages as a database (eg an object). The languages are listed below so you can copy and paste!
Write a 'welcome' function that takes a parameter 'language' (always a string), and returns a greeting - if you have it in your database.
It should default to English if the language is not in the database, or in the event of an invalid input.
The Database
english: "Welcome",
czech: "Vitejte",
danish: "Velkomst",
dutch: "Welkom",
estonian: "Tere tulemast",
finnish: "Tervetuloa",
flemish: "Welgekomen",
french: "Bienvenue",
german: "Willkommen",
irish: "Failte",
italian: "Benvenuto",
latvian: "Gaidits",
lithuanian: "Laukiamas",
polish: "Witamy",
spanish: "Bienvenido",
swedish: "Valkommen",
welsh: "Croeso"
Possible invalid inputs include:

IP_ADDRESS_INVALID - not a valid ipv4 or ipv6 ip address
IP_ADDRESS_NOT_FOUND - ip address not in the database
IP_ADDRESS_REQUIRED - no ip address was supplied */

package _8kyu;

import java.util.HashMap;

public class Welcome {

    public static String greet(String language) {
        HashMap<String, String> ret = new HashMap<String, String>();
        ret.put("english", "Welcome");
        ret.put("czech", "Vitejte");
        ret.put("danish", "Velkomst");
        ret.put("dutch", "Welkom");
        ret.put("estonian", "Tere tulemast");
        ret.put("finnish", "Tervetuloa");
        ret.put("flemish", "Welgekomen");
        ret.put("french", "Bienvenue");
        ret.put("german", "Willkommen");
        ret.put("irish", "Failte");
        ret.put("italian", "Benvenuto");
        ret.put("latvian", "Gaidits");
        ret.put("lithuanian", "Laukiamas");
        ret.put("polish", "Witamy");
        ret.put("spanish", "Bienvenido");
        ret.put("swedish", "Valkommen");
        ret.put("welsh", "Croeso");
        ret.put("IP_ADDRESS_INVALID", "Welcome");
        ret.put("IP_ADDRESS_NOT_FOUND", "Welcome");
        ret.put("IP_ADDRESS_REQUIRED", "Welcome");
        return ret.get(language);
    }

}