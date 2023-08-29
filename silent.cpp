// DWORD_PTR ClosestPawn = NULL;
// Vector3 Location; // Camera Location
// /
//Vector3 CalculateNewRotation(Vector3& zaz, Vector3& daz) {
//	Vector3 dalte = zaz - daz;
//	Vector3 ongle;
//	float hpm = sqrtf(dalte.x * dalte.x + dalte.y * dalte.y);
//	ongle.y = atan(dalte.y / dalte.x) * 57.295779513082f;
//	ongle.x = (atan(dalte.z / hpm) * 57.295779513082f) * -1.f;
//	if (dalte.x >= 0.f) ongle.y += 180.f;
//	return ongle;
//}
//
//Vector3 GetLoc(Vector3 Loc) {
//	Vector3 Location = Vector3(Loc.x, Loc.y, Loc.z);
//	return Location;
//}

//if (silentaim && GetAsyncKeyState(VK_RBUTTON))
//{
//	uint64_t currentactormesh = Read<uint64_t>(closestPawn + 0x310);
//	Vector3 TargetPosition = GetBoneWithRotation(currentactormesh, 66);
//	Vector3 TargetPositionToScreen = ProjectWorldToScreen(GetLoc(TargetPosition));
//
//	uintptr_t CurrentWeapon = Read<uintptr_t>(LocalPawn + 0x8d8);
//	uintptr_t PlayerCameraManager = Read<uintptr_t>(PlayerController + 0x340);
//
//	uintptr_t ViewYawMin = 0x331c; // APlayerCameraManager - ViewYawMin - 0x331c
//	uintptr_t ViewYawMax = 0x3320; // APlayerCameraManager - ViewYawMax - 0x3320
//	uintptr_t AimPitchMin = 0x10c0; // AFortWeaponRanged - AimPitchMin - 0x10c0
//	uintptr_t AimPitchMax = 0x10c4; // AFortWeaponRanged - AimPitchMax - 0x10c4
//
//	if (TargetPositionToScreen.x != 0 || TargetPositionToScreen.y != 0 || TargetPositionToScreen.z != 0)
//	{
//		if (CurrentWeapon && PlayerCameraManager)
//		{
//			Vector3 NewRotation = CalculateNewRotation(Location, TargetPosition);
//
///			static float OrginalPitchMin = KmDrv->Rpm<float>(PlayerCameraManager + ViewYawMin);
///			static float OrginalPitchMax = KmDrv->Rpm<float>(PlayerCameraManager + ViewYawMax);
//
//			Write<float>(CurrentWeapon + AimPitchMin, NewRotation.x);
///			Write<float>(CurrentWeapon + AimPitchMax, NewRotation.x);
//
//			Write<float>(PlayerCameraManager + ViewYawMin, NewRotation.y);
//			Write<float>(PlayerCameraManager + ViewYawMax, NewRotation.y);
//
//			Sleep(5);
///
//			Write<float>(PlayerCameraManager + ViewYawMin, OrginalPitchMin);
//			Write<float>(PlayerCameraManager + ViewYawMax, OrginalPitchMax);
// 		}
// 	}
// }