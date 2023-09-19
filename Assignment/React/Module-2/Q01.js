// input tab
const val1 = document.getElementById("val1");
const val2 = document.getElementById("val2");

// total
const tot1 = document.getElementById("tot1");
const tot2 = document.getElementById("tot2");

// subtotal
const subtot = document.getElementById("subtot")

// product price
let price = [10, 8];
let count1 = 0;
let count2 = 0;

// first product
val1.onkeyup = () => {
   count1 = val1.value * price[0];
   tot1.textContent = `$${count1}`;
   subtot.textContent = `$${count1 + count2}`;
}

// second product
val2.onkeyup = () => {
   count2 = val2.value * price[1];
   tot2.textContent = `$${count2}`;
   subtot.textContent = `$${count1 + count2}`;
}