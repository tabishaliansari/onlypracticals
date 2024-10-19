let display = document.getElementById('display');

function appendToDisplay(value) {
    display.textContent += value;
}

function clearDisplay() {
    display.textContent = '';
}

function calculate() {
    try {
        display.textContent = eval(display.textContent) || '';
    } catch (e) {
        display.textContent = 'Error';
    }
}