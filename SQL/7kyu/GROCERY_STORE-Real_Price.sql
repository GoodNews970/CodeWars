/*

GROCERY STORE: Real Price!

You are the owner of the Grocery Store. All your products are in the database, that you have created after CodeWars SQL excercises!:)

Customer often need to now how much really they pay for the products. Manufactureres make different sizes of same product so it is hard to compare prices, sometime they make package looks big, but the weight of the product is small.

Make SELECT query which will tell what is REAL(price per kg) price for the product

Weight in db is in grams! Round price_per_kg to 2 decimal digits

Order results by price_per_kg ascending then by name ascending

products table schema
id
name
price
stock
weight
producer
country
results table schema
name
weight
price
price_per_kg

*/

SELECT name, weight, price, ROUND((price / (weight / 1000))::decimal, 2)::double precision AS "price_per_kg"
FROM products
ORDER BY price_per_kg ASC, name ASC;