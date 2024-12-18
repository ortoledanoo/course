resource "aws_subnet" "ex-10-public-subnet" {
  vpc_id     = aws_vpc.main.id
  cidr_block = "10.0.1.0/24"
  map_public_ip_on_launch=true
  tags = {
    Name = "ex10-public-subnet"
  }
}