#pragma once

class CActor
{
public:
	void* m_vtable_ptr; //0x0000
	char pad_0004[4]; //0x0004
	Vector3 m_coordinates; //0x0008
	char pad_0014[12]; //0x0014
	D3DXVECTOR2 m_view_angles; //0x0020
	char pad_0028[12]; //0x0028
	D3DXVECTOR2 m_velocity; //0x0034
	char pad_003C[8]; //0x003C
	float m_health; //0x0044
	inline bool is_alive() const { return this->m_health > 0.0f; }
	char pad_0048[12]; //0x0048
	Vector3 m_coordinates2; //0x0054
	char pad_0060[72]; //0x0060
	uint32_t random_1; //0x00A8
	char pad_00AC[4]; //0x00AC
	uint32_t random_2; //0x00B0
	char pad_00B4[24]; //0x00B4
	uint32_t random_3; //0x00CC
	char pad_00D0[12]; //0x00D0
	uint32_t random_4; //0x00DC
	uint32_t m_movement_flags; //0x00E0
	char pad_00E4[4]; //0x00E4
	bool m_attacking; //0x00E8
	char pad_00E9[7]; //0x00E9
	uint32_t random_5; //0x00F0
	uint32_t random_6; //0x00F4
	char pad_00F8[72]; //0x00F8
	uint32_t random_7; //0x0140
	char pad_0144[12]; //0x0144
	uint32_t random_8; //0x0150
	char pad_0154[20]; //0x0154
	uint32_t random_9; //0x0168
	char pad_016C[76]; //0x016C
	uint32_t N000000C6; //0x01B8
	float random; //0x01BC
	float m_max_stamina; //0x01C0
	float m_stamina; //0x01C4
	char pad_01C8[76]; //0x01C8
	uint32_t random_10; //0x0214
	uint32_t random_11; //0x0218
	char pad_021C[108]; //0x021C
	float N000000FA; //0x0288
	float N000000FB; //0x028C
	float N000000FC; //0x0290
	float N000000FD; //0x0294
	float N00000787; //0x0298
	float N000000FE; //0x029C
	float N000000FF; //0x02A0
	float N00000100; //0x02A4
	float N00000101; //0x02A8
	float N00000102; //0x02AC
	float N00000103; //0x02B0
	float N00000104; //0x02B4
	float N00000105; //0x02B8
	float N00000106; //0x02BC
	float N00000107; //0x02C0
	float N00000108; //0x02C4
	float N00000109; //0x02C8
	float N0000010A; //0x02CC
	float N0000010B; //0x02D0
	float N0000010C; //0x02D4
	float N0000010D; //0x02D8
	float N0000010E; //0x02DC
	float N0000010F; //0x02E0
	float N00000110; //0x02E4
	float N00000111; //0x02E8
	char pad_02EC[60]; //0x02EC
	float N00000122; //0x0328
	char pad_032C[60]; //0x032C
	Vector3 m_head_coords; //0x0368
	char pad_0374[148]; //0x0374
	uint32_t random_12; //0x0408
	char pad_040C[1052]; //0x040C
	wchar_t m_name[16]; //0x0828
	wchar_t m_clan_name[16]; //0x0848
	char pad_0868[4]; //0x0868
	uint32_t random_13; //0x086C
	char pad_0870[88]; //0x0870
	uint8_t random_14; //0x08C8
	uint8_t m_teamid; //0x08C9

	inline bool is_alive() { return this->m_health > 0.0f; };
}; //Size: 0x08CA
