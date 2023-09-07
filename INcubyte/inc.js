class Spacecraft {
  //Spacecraft Structur
  constructor(x, y, z, direction) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.direction = direction;
    this.horizonataldirection = direction;
  }

  //Move Forward
  moveForward() {
    if (this.direction === "N") {
      this.y += 1;
    } else if (this.direction === "S") {
      this.y -= 1;
    } else if (this.direction === "E") {
      this.x += 1;
    } else if (this.direction === "W") {
      this.x -= 1;
    } else if (this.direction === "U") {
      this.z += 1;
    } else if (this.direction === "D") {
      this.z -= 1;
    }
  }

  //Move Backward
  moveBackward() {
    if (this.direction === "N") {
      this.y -= 1;
    } else if (this.direction === "S") {
      this.y += 1;
    } else if (this.direction === "E") {
      this.x -= 1;
    } else if (this.direction === "W") {
      this.x += 1;
    } else if (this.direction === "U") {
      this.z -= 1;
    } else if (this.direction === "D") {
      this.z += 1;
    }
  }

  //Rotate in the Left Direction
  moveLeft() {
    if (this.direction === "N") {
      this.direction = "W";
      this.horizonataldirection = "W";
    } else if (this.direction === "S") {
      this.direction = "E";
      this.horizonataldirection = "E";
    } else if (this.direction === "E") {
      this.direction = "N";
      this.horizonataldirection = "N";
    } else if (this.direction === "W") {
      this.direction = "S";
      this.horizonataldirection = "S";
    } else if (this.direction === "U") {  
        console.log(this.horizonataldirection);
      if (this.horizonataldirection === "N") {
        this.direction = "W";
        this.horizonataldirection = "W";
      } else if (this.horizontalDirection === "S") {
        this.direction = "E";
        this.horizonataldirection = "E";
      } else if (this.horizonataldirection === "E") {
        this.direction = "N";
        this.horizonataldirection = "N";
      } else if (this.horizontaldirection === "W") {
        this.direction = "S";
        this.horizonataldirection = "S";
      }
    } else if (this.direction === "D") {
      if (this.horizonataldirection === "N") {
        this.direction = "E";
        this.horizonataldirection = "E";
      } else if (this.horizontalDirection === "S") {
        this.direction = "W";
        this.horizonataldirection = "W";
      } else if (this.horizonataldirection === "E") {
        this.direction = "S";
        this.horizonataldirection = "S";
      } else if (this.horizontaldirection === "W") {
        this.direction = "N";
        this.horizonataldirection = "N";
      }
    }
  }

  //Rotate in the Right Direction
  moveRight() {
    if (this.direction === "N") {
      this.direction = "E";
      this.horizonataldirection = "E";
    } else if (this.direction === "S") {
      this.direction = "W";
      this.horizonataldirection = "W";
    } else if (this.direction === "E") {
      this.direction = "S";
      this.horizonataldirection = "S";
    } else if (this.direction === "W") {
      this.direction = "N";
      this.horizonataldirection = "N";
    } else if (this.direction === "U") {
      if (this.horizonataldirection === "N") {
        this.direction = "E";
        this.horizonataldirection = "E";
      } else if (this.horizontalDirection === "S") {
        this.direction = "W";
        this.horizonataldirection = "W";
      } else if (this.horizonataldirection === "E") {
        this.direction = "S";
        this.horizonataldirection = "S";
      } else if (this.horizontaldirection === "W") {
        this.direction = "N";
        this.horizonataldirection = "N";
      }
    } else if (this.direction === "D") {
      if (this.horizonataldirection === "N") {
        this.direction = "W";
        this.horizonataldirection = "W";
      } else if (this.horizontalDirection === "S") {
        this.direction = "E";
        this.horizonataldirection = "E";
      } else if (this.horizonataldirection === "E") {
        this.direction = "N";
        this.horizonataldirection = "N";
      } else if (this.horizontaldirection === "W") {
        this.direction = "S";
        this.horizonataldirection = "S";
      }
    }
  }

  //Rotate in the Up Direction
  moveUp() {
    this.direction = "U";
  }

  //Rotate in the Down Direction
  moveDown() {
    this.direction = "D";
  }
}

const s = new Spacecraft(0, 0, 0, "W");
// s.moveForward();
// s.moveRight();
s.moveUp();
console.log(s.direction, s.horizonataldirection, s.x, s.y, s.z);

// s.moveBackward();
s.moveLeft();

console.log(s.direction,s.horizonataldirection, s.x, s.y, s.z);
