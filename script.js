let slides = document.querySelectorAll(".slide");
let current = 0;

function next() {
  slides[current].classList.remove("active");
  current++;
  slides[current].classList.add("active");
}

// Music
let music = document.getElementById("music");
let playing = false;
function toggleMusic() {
  playing ? music.pause() : music.play();
  playing = !playing;
}

// NO button
function moveNo() {
  let btn = document.getElementById("noBtn");
  btn.style.left = Math.random() * 200 - 100 + "px";
  btn.style.top = Math.random() * 80 - 40 + "px";
}

// YES hearts
function yes() {
  next();
  for (let i = 0; i < 50; i++) createHeart();
}

function createHeart() {
  let h = document.createElement("div");
  h.innerText = "🤍";
  h.style.position = "fixed";
  h.style.left = Math.random() * 100 + "vw";
  h.style.bottom = "0";
  h.style.fontSize = "20px";
  document.body.appendChild(h);
  h.animate(
    [{ transform: "translateY(0)" }, { transform: "translateY(-120vh)" }],
    { duration: 4500 }
  );
  setTimeout(() => h.remove(), 4500);
}

// Image slider
let imgs = ["img1.jpg", "img2.jpg", "img3.jpg"];
let idx = 0;
function nextImg() {
  idx = (idx + 1) % imgs.length;
  photo.src = imgs[idx];
}
function prevImg() {
  idx = (idx - 1 + imgs.length) % imgs.length;
  photo.src = imgs[idx];
}

// Background stars
const canvas = document.getElementById("bg");
const ctx = canvas.getContext("2d");
canvas.width = innerWidth;
canvas.height = innerHeight;

let stars = Array.from({ length: 120 }, () => ({
  x: Math.random() * canvas.width,
  y: Math.random() * canvas.height,
  r: Math.random() * 1.2
}));

function animateStars() {
  ctx.clearRect(0, 0, canvas.width, canvas.height);
  ctx.fillStyle = "white";
  stars.forEach(s => {
    ctx.beginPath();
    ctx.arc(s.x, s.y, s.r, 0, Math.PI * 2);
    ctx.fill();
  });
  requestAnimationFrame(animateStars);
}
animateStars();