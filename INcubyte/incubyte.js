const moveUp = () => {
  spacecraftPosition.direction = "U";
};
const moveDown = () => {
  spacecraftPosition.direction = "D";
};
const moveRight = () => {
  if (spacecraftPosition.direction === "N") {
    spacecraftPosition.direction = "E";
    spacecraftPosition.horizontalDirection = "E";
  } else if (spacecraftPosition.direction === "E") {
    spacecraftPosition.direction = "S";
    spacecraftPosition.horizontalDirection = "S";
  } else if (spacecraftPosition.direction === "S") {
    spacecraftPosition.direction = "W";
    spacecraftPosition.horizontalDirection = "W";
  } else if (spacecraftPosition.direction === "W") {
    spacecraftPosition.direction = "N";
    spacecraftPosition.horizontalDirection = "N";
  } else {
    if (spacecraftPosition.horizontalDirection === "N") {
      spacecraftPosition.direction = "E";
      spacecraftPosition.horizontalDirection = "E";
    } else if (spacecraftPosition.horizontalDirection === "E") {
      spacecraftPosition.direction = "S";
      spacecraftPosition.horizontalDirection = "S";
    } else if (spacecraftPosition.horizontalDirection === "S") {
      spacecraftPosition.direction = "W";
      spacecraftPosition.horizontalDirection = "W";
    } else {
      spacecraftPosition.direction = "N";
      spacecraftPosition.horizontalDirection = "N";
    }
  }
};
const moveLeft = () => {
  if (spacecraftPosition.direction === "N") {
    spacecraftPosition.direction = "W";
    spacecraftPosition.horizontalDirection = "W";
  } else if (spacecraftPosition.direction === "E") {
    spacecraftPosition.direction = "N";
    spacecraftPosition.horizontalDirection = "N";
  } else if (spacecraftPosition.direction === "S") {
    spacecraftPosition.direction = "E";
    spacecraftPosition.horizontalDirection = "E";
  } else if (spacecraftPosition.direction === "W") {
    spacecraftPosition.direction = "S";
    spacecraftPosition.horizontalDirection = "S";
  } else {
    if (spacecraftPosition.horizontalDirection === "N") {
      spacecraftPosition.direction = "W";
      spacecraftPosition.horizontalDirection = "W";
    } else if (spacecraftPosition.horizontalDirection === "E") {
      spacecraftPosition.direction = "N";
      spacecraftPosition.horizontalDirection = "N";
    } else if (spacecraftPosition.horizontalDirection === "S") {
      spacecraftPosition.direction = "E";
      spacecraftPosition.horizontalDirection = "E";
    } else {
      spacecraftPosition.direction = "S";
      spacecraftPosition.horizontalDirection = "S";
    }
  }
};
const moveFront = () => {
  if (spacecraftPosition.direction === "U") {
    spacecraftPosition.z += 1;
  } else if (spacecraftPosition.direction === "D") {
    spacecraftPosition.z -= 1;
  } else if (spacecraftPosition.direction === "N") {
    spacecraftPosition.y += 1;
  } else if (spacecraftPosition.direction === "S") {
    spacecraftPosition.y -= 1;
  } else if (spacecraftPosition.direction === "E") {
    spacecraftPosition.x += 1;
  } else {
    spacecraftPosition.x -= 1;
  }
};
const moveBack = () => {
  if (spacecraftPosition.direction === "U") {
    spacecraftPosition.z -= 1;
  } else if (spacecraftPosition.direction === "D") {
    spacecraftPosition.z += 1;
  } else if (spacecraftPosition.direction === "N") {
    spacecraftPosition.y -= 1;
  } else if (spacecraftPosition.direction === "S") {
    spacecraftPosition.y += 1;
  } else if (spacecraftPosition.direction === "E") {
    spacecraftPosition.x -= 1;
  } else {
    spacecraftPosition.x += 1;
  }
};

let spacecraftPosition = {
  x: 0,
  y: 0,
  z: 0,
  direction: "N",
  horizontalDirection: "N",
};
moveFront();
console.log(
  "Final Direction: ",
  spacecraftPosition.direction,
  spacecraftPosition.horizontalDirection
);
console.log(
  "Final Position (",
  spacecraftPosition.x,
  spacecraftPosition.y,
  spacecraftPosition.z,
  ")"
);
moveRight();
console.log(
  "Final Direction: ",
  spacecraftPosition.direction,
  spacecraftPosition.horizontalDirection
);
console.log(
  "Final Position (",
  spacecraftPosition.x,
  spacecraftPosition.y,
  spacecraftPosition.z,
  ")"
);
moveUp();
console.log(
  "Final Direction: ",
  spacecraftPosition.direction,
  spacecraftPosition.horizontalDirection
);
console.log(
  "Final Position (",
  spacecraftPosition.x,
  spacecraftPosition.y,
  spacecraftPosition.z,
  ")"
);
moveBack();
console.log(
  "Final Direction: ",
  spacecraftPosition.direction,
  spacecraftPosition.horizontalDirection
);
console.log(
  "Final Position (",
  spacecraftPosition.x,
  spacecraftPosition.y,
  spacecraftPosition.z,
  ")"
);
moveLeft();
console.log(
  "Final Direction: ",
  spacecraftPosition.direction,
  spacecraftPosition.horizontalDirection
);
console.log(
  "Final Position (",
  spacecraftPosition.x,
  spacecraftPosition.y,
  spacecraftPosition.z,
  ")"
);
