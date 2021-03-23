[1mdiff --git a/game/index.html b/game/index.html[m
[1mindex 809c4dc..014679c 100644[m
[1m--- a/game/index.html[m
[1m+++ b/game/index.html[m
[36m@@ -30,23 +30,31 @@[m [mvar hand= new THREE.SphereGeometry(50);[m
 var rightHand= new THREE.MeshNormalMaterial(flat);[m
 var rightHand= new THREE.Mesh (hand, rightHand);[m
 rightHand.position.set(-150,0,0);[m
[31m-scene.add(rightHand);[m
[32m+[m[32mavatar.add(rightHand);[m
     [m
 var leftHand= new THREE.MeshNormalMaterial(flat);[m
 var leftHand= new THREE.Mesh (hand, leftHand);[m
 leftHand.position.set(150,0,0);[m
[31m-scene.add(leftHand);[m
[32m+[m[32mavatar.add(leftHand);[m
 //pie[m
 var foot= new THREE.SphereGeometry(50);[m
 var rightFoot= new THREE.Mesh (foot, cover);[m
 rightFoot.position.set(-75,-125,0);[m
[31m-scene.add(rightFoot);[m
[32m+[m[32mavatar.add(rightFoot);[m
     [m
 var leftFoot= new THREE.Mesh (foot, cover);[m
 leftFoot.position.set(75,-125,0);[m
[31m-scene.add(leftFoot);[m
[32m+[m[32mavatar.add(leftFoot);[m
 [m
 [m
[32m+[m[41m    [m
[32m+[m[32mfunction animate() {[m
[32m+[m[32m    requestAnimationFrame(animate);[m
[32m+[m[32m    avatar.rotation.z = avatar.rotation.z + 0.05;[m
[32m+[m[32m    renderer.render(scene, camera);[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32manimate();[m
 [m
   // Now, show what the camera sees on the screen:[m
   renderer.render(scene, camera);[m
