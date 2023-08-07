const choice = document.getElementById("choice");
const moreOption = document.getElementById("moreOption");

// date
const date = document.createElement("input");
date.setAttribute("type", "date");
date.setAttribute("class", "input");

// slot
const select = document.createElement("select");
select.setAttribute("class", "input");

const option0 = document.createElement("option");
const option1 = document.createElement("option");
const option2 = document.createElement("option");
const option3 = document.createElement("option");

option0.setAttribute("selected", "selected");
option0.setAttribute("disabled", "disabled");
option0.textContent = "Select Slot";
option1.textContent = "BreakFast";
option2.textContent = "Lunch";
option3.textContent = "Dinner";

select.appendChild(option0);
select.appendChild(option1);
select.appendChild(option2);
select.appendChild(option3);

// time
const time = document.createElement("input");
time.setAttribute("type", "time");
time.setAttribute("class", "input");

choice.onclick = () => {
    // removes element
    while (moreOption.firstChild) {
        moreOption.removeChild(moreOption.firstChild);
    }

    // adds element
    if (choice.selectedIndex == 1) {
        moreOption.appendChild(date);
    } else if (choice.selectedIndex == 2) {
        moreOption.appendChild(date);
        moreOption.appendChild(select);
    } else if (choice.selectedIndex == 3) {
        moreOption.appendChild(date);
        moreOption.appendChild(time);
    }
};