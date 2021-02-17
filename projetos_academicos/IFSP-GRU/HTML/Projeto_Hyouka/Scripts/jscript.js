function funTrocaGif() {
    principal.className = sel_anima.value;
    img_anima.src = "Imagens/" +sel_anima.value + ".gif";
    img_anima.alt = img_anima.title = sel_anima.value;
}
