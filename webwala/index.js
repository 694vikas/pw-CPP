let p = document.querySelector(".p");
console.log(p);

let counter = 0;

function counterf() {
  counter += 1;
  if (counter >= 11) {
    clearInterval();
    p.innerHTML = `<a href="google.com"> click here for link</a>`;
  } else {
    p.innerHTML = `wait for ${counter} Seconds`;
  }
}

setInterval(counterf, 1000);
